/**
 * Adaptive search C++
 *
 * \file strategy_next_i.hpp
 * \brief Strategy Pattern to return the next i (variable) to consider
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyNextI strategy_next_i.hpp
 * \brief Strategy Pattern to return the next i (variable) to consider
 */
class StrategyNextI
{
 public:

  /**
   * \fn	int nextI( int i )
   * \brief	Virtual wrapper when user function nextI is not defined.
   * \param	i: a variable.
   * \return	The next variable (i+1)
   */
  virtual int nextI( int i ) = 0;
};
