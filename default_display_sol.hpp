/**
 * Adaptive search C++
 *
 * \file default_display_sol.hpp
 * \brief Default strategy to display the solution
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultDisplaySol default_display_sol.hpp
 * \brief Default strategy to display the solution
 */
class DefaultDisplaySol : public StrategyDisplaySol
{
 public:

  /**
   * \fn	void displaySolution( AdData *p_ad )
   * \brief	Wrapper when user function displaySolution is not defined.
   * \param	p_ad: Pointer toward the current configuration (or solution).
   */
  void displaySolution( AdData *p_ad );
};
