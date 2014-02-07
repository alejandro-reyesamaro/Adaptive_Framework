/**
 * Adaptive search C++
 *
 * \file strategy_reset.hpp
 * \brief Strategy Pattern to perform a reset
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyReset strategy_reset.hpp
 * \brief Strategy Pattern to perform a reset
 */
class StrategyReset
{
 public:

  /**
   * \fn	int reset( int n, AdData *p_ad )
   * \brief	Virtual wrapper when user function reset is not defined.
   * \param	n: number of reset loop to perform.
   *		p_ad: pointer toward the configuration.
   * \return	The new cost, or -1 if unknown.
   */
  virtual int reset( int n, AdData *p_ad ) = 0;
};
