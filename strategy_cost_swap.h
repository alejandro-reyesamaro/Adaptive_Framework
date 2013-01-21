/**
 * Adaptive search C++
 *
 * \file strategy_cost_swap.h
 * \brief Strategy Pattern to compute the cost of a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyCostSwap strategy_cost_swap.h
 * \brief Strategy Pattern to compute the cost of a swap
 */
class StrategyCostSwap
{
 public:

  /**
   * \fn	int costIfSwap( int currentCost, int i, int j )
   * \brief	Virtual wrapper when user function costIfSwap is not defined.
   * \param	currentCost: the current cost when this function is called.
   *		i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  virtual int costIfSwap( int currentCost, int i, int j ) = 0;
};
