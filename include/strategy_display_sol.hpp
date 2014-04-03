/*
 * Adaptive Framework is a C++ metaheuristics framework.
 * Please visit https://github.com/richoux/Adaptive_Framework 
 * for further information.
 * 
 * Copyright (C) 2013-2014 Florian Richoux
 *
 * This file is part of Adaptive Framework.
 * Adaptive Framework is free software: you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License as published 
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Adaptive Framework is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with  Adaptive Framework. If not, see http://www.gnu.org/licenses/.
 */


/**
 * Adaptive Framework
 *
 * \file strategy_display_sol.hpp
 * \brief Strategy Pattern to display the solution
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyDisplaySol strategy_display_sol.hpp
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
