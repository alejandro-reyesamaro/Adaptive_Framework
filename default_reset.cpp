/**
 * Adaptive search C++
 *
 * \file default_reset.cpp
 * \brief Default strategy to perform a reset
 * \author Florian Richoux
 * \date 2013-01-21
 */

int DefaultReset::reset( int n, AdData *p_ad )
{
  int i, j, x;
  int size = p_ad->size;
  int *sol = p_ad->sol;

  while( n-- )
    {
      i = random( size );
      j = random( size );

      p_ad->nb_swap++;

      x = sol[i];
      sol[i] = sol[j];
      sol[j] = x;
    }
 
  return -1;
}
