/**
 * Adaptive search C++
 *
 * \file strategy_exec_swap.h
 * \brief Strategy Pattern to execute a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyExecSwap strategy_exec_swap.h
 * \brief Strategy Pattern to execute a swap
 */
class StrategyExecSwap
{
 public:

  /**
   * \fn	void executedSwap( int k1, int k2 )
   * \brief	Virtual wrapper when user function executedSwap is not defined.
   * \param	k1 and k2: variables to swap.
   */
  virtual void executedSwap( int k1, int k2 ) = 0;
};
