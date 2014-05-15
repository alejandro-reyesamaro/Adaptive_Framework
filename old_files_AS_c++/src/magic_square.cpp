/*
 * Adaptive Framework is a C++ metaheuristics framework.
 * Please visit https://github.com/richoux/Adaptive_Framework 
 * for further information.
 * 
 * Copyright (C) 2013-2014 Florian Richoux
 *
 * This file is part of Adaptive Framework.
 * Adaptive Framework is free software: you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License as published 
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Adaptive Framework is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with  Adaptive Framework. If not, see http://www.gnu.org/licenses/.
 */


/**
 *  Adaptive Framework
 *
 *  \file magic_square.cpp
 *  \brief Magic Square benchmark 
 *  \author Florian Richoux
 *  \date 2013-01-21
 */

void MagicSquare::solve( AdData *p_ad )
{
  int i, j, k;
  XRef xr;

  sol = p_ad->sol;
  size = p_ad->size;

  square_length = p_ad->param;
  square_length_m1 = square_length - 1;
  square_length_p1 = square_length + 1;

  avg = p_ad->data32[0];

  if (err_l == NULL)
    {
      err_l = (int *) malloc(square_length * sizeof(int));
      err_c = (int *) malloc(square_length * sizeof(int));
      err_l_abs = (int *) malloc(square_length * sizeof(int));
      err_c_abs = (int *) malloc(square_length * sizeof(int));
      xref = (XRef *) malloc(p_ad->size * sizeof(XRef));

      if (err_l == NULL || err_c == NULL || err_l_abs == NULL || err_c_abs == NULL || xref == NULL)
	{
          fprintf(stderr, "%s:%d malloc failed\n", __FILE__, __LINE__);
          exit(1);

	}
    }

  for(k = 0; k < p_ad->size; k++)
    {
      i = k / square_length;
      j = k % square_length;

      XSet(xr, i, j, (i == j), (i + j == square_length_m1));

      xref[k] = xr;
    }

  Ad_Solve(p_ad);
}

int MagicSquare::costOfSolution( int should_be_recorded )
{
  int k, r;
  int neg_avg = -avg;

  err_d1 = err_d2 = neg_avg;

  memset(err_l, 0, sizeof(int) * square_length);
  memset(err_c, 0, sizeof(int) * square_length);

  k = 0;
  do
    {
      XRef xr = xref[k];

      err_l[XGetL(xr)] += sol[k];
      err_c[XGetC(xr)] += sol[k];
    }
  while(++k < size);

  int k1 = 0, k2 = 0;
  do
    {
      k2 += square_length_m1;
      err_d1 += sol[k1];
      err_d2 += sol[k2];

      k1 += square_length_p1;
    }
  while(k1 < size);

  err_d1_abs = abs(err_d1);
  err_d2_abs = abs(err_d2);

  r = err_d1_abs + err_d2_abs;
  k = 0;
  do
    {
      err_l[k] -= avg; err_l_abs[k] = abs(err_l[k]); r += err_l_abs[k];
      err_c[k] -= avg; err_c_abs[k] = abs(err_c[k]); r += err_c_abs[k];
    }
  while(++k < square_length);

  return r;
}

int MagicSquare::Cost_On_Variable(int k)
{
  XRef xr = xref[k];

  return err_l_abs[XGetL(xr)] + err_c_abs[XGetC(xr)] + 
    (XIsOnD1(xr) ? err_d1_abs : 0) + 
    (XIsOnD2(xr) ? err_d2_abs : 0);
}

#define AdjustL(r, diff, k)   r = r - err_l_abs[k] + abs(err_l[k] + diff)
#define AdjustC(r, diff, k)   r = r - err_c_abs[k] + abs(err_c[k] + diff)
#define AdjustD1(r, diff)     r = r - err_d1_abs   + abs(err_d1   + diff)
#define AdjustD2(r, diff)     r = r - err_d2_abs   + abs(err_d2   + diff)
int MagicSquare::Cost_If_Swap(int current_cost, int k1, int k2)
{
  XRef xr1 = xref[k1];
  XRef xr2 = xref[k2];
  int l1 = XGetL(xr1);
  int c1 = XGetC(xr1);
  int l2 = XGetL(xr2);
  int c2 = XGetC(xr2);
  int diff1, diff2, r;
  
  r = current_cost;

  diff1 = sol[k2] - sol[k1];
  diff2 = -diff1;

  if (l1 != l2)			/* not on the same line */
    {
      AdjustL(r, diff1, l1);
      AdjustL(r, diff2, l2);
    }

  if (c1 != c2)			/* not on the same column */
    {
      AdjustC(r, diff1, c1);
      AdjustC(r, diff2, c2);
    }


  if (XIsOnD1(xr1))		/* only one of both is on diagonal 1 */
    {
      if (!XIsOnD1(xr2))
	AdjustD1(r, diff1);
    }
  else if (XIsOnD1(xr2))
    {
      AdjustD1(r, diff2);
    }

  if (XIsOnD2(xr1))		/* only one of both is on diagonal 2 */
    {
      if (!XIsOnD2(xr2))
	AdjustD2(r, diff1);
    }
  else if (XIsOnD2(xr2))
    {
      AdjustD2(r, diff2);
    }

  return r;
}

void MagicSquare::Executed_Swap(int k1, int k2)
{
  XRef xr1 = xref[k1];
  XRef xr2 = xref[k2];
  int l1 = XGetL(xr1);
  int c1 = XGetC(xr1);
  int l2 = XGetL(xr2);
  int c2 = XGetC(xr2);
  int diff1, diff2;
  
  diff1 = sol[k1] - sol[k2]; /* swap already executed */
  diff2 = -diff1;

  err_l[l1] += diff1; err_l_abs[l1] = abs(err_l[l1]);
  err_l[l2] += diff2; err_l_abs[l2] = abs(err_l[l2]);
  
  err_c[c1] += diff1; err_c_abs[c1] = abs(err_c[c1]);
  err_c[c2] += diff2; err_c_abs[c2] = abs(err_c[c2]);
  
  if (XIsOnD1(xr1))
    {
      err_d1 += diff1;
      err_d1_abs = abs(err_d1);
    }

  if (XIsOnD1(xr2))
    {
      err_d1 += diff2;
      err_d1_abs = abs(err_d1);
    }

  if (XIsOnD2(xr1))
    {
      err_d2 += diff1;
      err_d2_abs = abs(err_d2);
    }


  if (XIsOnD2(xr2))
    {
      err_d2 += diff2;
      err_d2_abs = abs(err_d2);
    }
}


int param_needed = 1;		/* overwrite var of main.c */
void MagicSquare::initParameters( AdData *p_ad )
{
  int square_length = p_ad->param;

  p_ad->size = square_length * square_length;

  int avg = square_length * (p_ad->size + 1) / 2;
  printf("sum of each line/col/diag = %d\n", avg);

  p_ad->data32[0] = avg;


  p_ad->base_value = 1;
  p_ad->break_nl = square_length;
  /* defaults */
  if (p_ad->prob_select_loc_min == -1)
    p_ad->prob_select_loc_min = 6;

  if (p_ad->freeze_loc_min == -1)
    p_ad->freeze_loc_min = 1;

  if (p_ad->freeze_swap == -1)
    p_ad->freeze_swap = 1; //0

  if (p_ad->reset_limit == -1)
    p_ad->reset_limit = square_length * 1.2;

  if (p_ad->reset_percent == -1)
    p_ad->reset_percent = 25;

  if (p_ad->restart_limit == -1)
    p_ad->restart_limit = 10000000;

  if (p_ad->restart_max == -1)
    p_ad->restart_max = 0;
}

int MagicSquare::checkSolution( AdData *p_ad )
{
  int square_length = p_ad->param;
  int *sol = p_ad->sol;
  int avg = square_length * (p_ad->size + 1) / 2;
  int i, j;
  int sum_d1 = 0, sum_d2 = 0;
  
  
  for(i = 0; i < square_length; i++)
    {
      sum_d1 += sol[i * (square_length + 1)];
      sum_d2 += sol[(i + 1) * (square_length - 1)];
      int sum_l = 0, sum_c = 0;

      for(j = 0; j < square_length; j++)
        {
          sum_l += sol[i * square_length + j];
          sum_c += sol[j * square_length + i];
        }

      if (sum_l != avg)
	{
	  printf("ERROR line %d, sum: %d should be %d\n", i, sum_l, avg);
	  return 0;
	}

      if (sum_c != avg)
	{
	  printf("ERROR column %d, sum: %d should be %d\n", i, sum_c, avg);
	  return 0;
	}
    }


  if (sum_d1 != avg)
    {
      printf("ERROR column 1 (\\), sum: %d should be %d\n", sum_d1, avg);
      return 0;
    }

  if (sum_d2 != avg)
    {
      printf("ERROR column 2 (/), sum: %d should be %d\n", sum_d2, avg);
      return 0;
    }

  return 1;
}
