/**
 * Adaptive search C++
 *
 * \file default_reset.h
 * \brief Default strategy to perform a reset
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultReset default_reset.h
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
  int reset( int n, AdData *p_ad )
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
};
