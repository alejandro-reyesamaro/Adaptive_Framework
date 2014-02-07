/**
 * Adaptive search C++
 *
 * \file default_cost_swap.cpp
 * \brief Default strategy to compute the cost of a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

int DefaultCostSwap::costIfSwap( int currentCost, int i, int j )
{
  int x;
  int r;
    
  x = ad_sol[i];
  ad_sol[i] = ad_sol[j];
  ad_sol[j] = x;
    
  r = costOfSolution( 0 );
    
  ad_sol[j] = ad_sol[i];
  ad_sol[i] = x;
    
  if( ad_reinit_after_if_swap )
    costOfSolution( 0 );
    
  return r;
}
