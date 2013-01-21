/**
 * Adaptive search C++
 *
 * \file default_next_j.hpp
 * \brief Default strategy to return the next j (value) to consider, given i (variable)
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultNextJ default_next_j.hpp
 * \brief Default strategy to return the next j (value) to consider, given i (variable)
 */
class DefaultNextJ : public StrategyNextJ
{
 public:

  /**
   * \fn	int nextJ( int i, int j )
   * \brief	Wrapper when user function nextJ is not defined.
   * \param	i and j: two variables.
   * \return	The next j-variable (j+1), unless j < 0 (then returns i+1)
   */
  int nextJ( int i, int j );
};
