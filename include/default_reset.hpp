/**
 * Adaptive search C++
 *
 * \file default_reset.hpp
 * \brief Default strategy to perform a reset
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultReset default_reset.hpp
 * \brief Default strategy to perform a reset
 */
class DefaultReset : public StrategyReset
{
 public:

  /**
   * \fn	int reset( int n, AdData *p_ad )
   * \brief	Wrapper when user function reset is not defined.
   * \param	n: number of reset loop to perform.
   *		p_ad: pointer toward the configuration.
   * \return	The new cost, or -1 if unknown.
   */
  int reset( int n, AdData *p_ad );
};
