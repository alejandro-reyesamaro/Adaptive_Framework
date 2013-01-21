/**
 * Adaptive search C++
 *
 * \file strategy_next_j.hpp
 * \brief Strategy Pattern to return the next j (value) to consider, given i (variable)
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyNextJ strategy_next_j.hpp
 * \brief Strategy Pattern to return the next j (value) to consider, given i (variable)
 */
class StrategyNextJ
{
 public:

  /**
   * \fn	int nextJ( int i, int j )
   * \brief	Virtual wrapper when user function nextJ is not defined.
   * \param	i and j: two variables.
   * \return	The next j-variable (j+1), unless j < 0 (then returns i+1)
   */
  virtual int nextJ( int i, int j ) = 0;
};
