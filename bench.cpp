/**
 *  Adaptive search C++
 *
 *  \file bench.cpp
 *  \brief benchmark mother class 
 *  \author Florian Richoux
 *  \date 2011-09-03
 *
 *  Copyright (C) 2011 JFLI
 */

#include "bench.h"

int Bench::Cost_If_Swap(int current_cost, int i, int j)
{
  int x;
  int r;

  x = ad_sol[i];
  ad_sol[i] = ad_sol[j];
  ad_sol[j] = x;

  r = Cost_Of_Solution(0);

  ad_sol[j] = ad_sol[i];
  ad_sol[i] = x;

  if (ad_reinit_after_if_swap)
    Cost_Of_Solution(0);

  return r;
}

int Bench::Cost_On_Variable(int k)
{
  fprintf(stderr, "%s:%d: error: wrapper Cost_On_Variable function called\n",
	  __FILE__, __LINE__);
  return 0;
}

void Bench::Display_Solution(AdData *p_ad)
{
  Ad_Display(p_ad->sol, p_ad, NULL);
}

void Bench::Executed_Swap(int k1, int k2)
{
  //  ad.total_cost = Cost_Of_Solution(1);
}

int Bench::Next_I(int i)
{
  return i + 1;
}

int Bench::Next_J(int i, int j)
{
  if (j < 0)
    j = i;
  return j + 1;
}

int Bench::Reset(int n, AdData *p_ad)
{
  int i, j, x;
  int size = p_ad->size;
  int *sol = p_ad->sol;

  while(n--)
    {
      i = Random(size);
      j = Random(size);

      p_ad->nb_swap++;

      x = sol[i];
      sol[i] = sol[j];
      sol[j] = x;
    }

  return -1;
}
