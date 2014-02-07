/**
 * Adaptive search C++
 *
 * \file default_cost_swap.hpp
 * \brief Default strategy to compute the cost of a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultCostSwap default_cost_swap.hpp
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
  int costIfSwap( int currentCost, int i, int j );
};
