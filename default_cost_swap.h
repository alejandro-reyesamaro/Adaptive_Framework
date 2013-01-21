/**
 * Adaptive search C++
 *
 * \file default_cost_swap.h
 * \brief Default strategy to compute the cost of a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultCostSwap default_cost_swap.h
 * \brief Default strategy to compute the cost of a swap
 */
class DefaultCostSwap : public StrategyCostSwap
{
 public:

  /**
   * \fn	int costIfSwap( int currentCost, int i, int j )
   * \brief	Wrapper when user function costIfSwap is not defined.
   * \param	currentCost: the current cost when this function is called.
   *		i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  int costIfSwap( int currentCost, int i, int j )
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
};
