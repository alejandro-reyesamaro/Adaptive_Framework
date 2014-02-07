/**
 * Adaptive search C++
 *
 * \file default_display_sol.cpp
 * \brief Default strategy to display the solution
 * \author Florian Richoux
 * \date 2013-01-21
 */

void DefaultDisplaySol::displaySolution( AdData *p_ad )
{
  Ad_Display( p_ad->sol, p_ad, NULL );
}
