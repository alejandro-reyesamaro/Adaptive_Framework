/**
 * Adaptive search C++
 *
 * \file strategy_display_sol.h
 * \brief Strategy Pattern to display the solution
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyDisplaySol strategy_display_sol.h
 * \brief Strategy Pattern to display the solution
 */
class StrategyDisplaySol
{
 public:

  /**
   * \fn	void displaySolution( AdData *p_ad )
   * \brief	Virtual wrapper when user function displaySolution is not defined.
   * \param	p_ad: Pointer toward the current configuration (or solution).
   */
  virtual void displaySolution( AdData *p_ad ) = 0;
};
