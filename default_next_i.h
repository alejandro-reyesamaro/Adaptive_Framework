/**
 * Adaptive search C++
 *
 * \file default_next_i.h
 * \brief Default strategy to return the next i (variable) to consider
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultNextI default_next_i.h
 * \brief Default strategy to return the next i (variable) to consider
 */
class DefaultNextI : public StrategyNextI
{
 public:

  /**
   * \fn	int nextI( int i )
   * \brief	Wrapper when user function nextI is not defined.
   * \param	i: a variable.
   * \return	The next variable (i+1)
   */
  int nextI( int i )
  {
    return i + 1;
  }
};
