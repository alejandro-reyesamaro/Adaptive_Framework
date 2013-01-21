/**
 * Adaptive search C++
 *
 * \file default_exec_swap.hpp
 * \brief Default strategy to execute a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultExecSwap default_exec_swap.hpp
 * \brief Default strategy to execute a swap
 */
class DefaultExecSwap : public StrategyExecSwap
{
 public:

  /**
   * \fn	void executedSwap( int k1, int k2 )
   * \brief	Wrapper when user function executedSwap is not defined.
   * \param	k1 and k2: variables to swap.
   */
  void executedSwap( int k1, int k2 );
};
