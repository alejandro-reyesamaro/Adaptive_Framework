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
 * \file bench.hpp
 * \brief Benchmark mother class 
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class Bench bench.hpp
 * \brief Benchmark mother class 
 */
class Bench
{
 public:

  StrategyCostSwap	strategyCostSwap;	/**< Stragety Pattern to compute the cost of a swap */

  StrategyCostVar	strategyCostVar;	/**< Stragety Pattern to compute 
						   the projected cost on a variable */

  StrategyDisplaySol	strategyDisplaySol;	/**< Stragety Pattern to display the solution */

  StrategyExecSwap	strategyExecSwap;	/**< Stragety Pattern to execute a swap */

  StrategyNextI		strategyNextI;		/**< Stragety Pattern to return 
						   the next i (variable) to consider */

  StrategyNextJ		strategyNextJ;		/**< Stragety Pattern to return 
						   the next j (value) to consider, given i (variable) */

  StrategyReset		strategyReset;		/**< Stragety Pattern to perform a reset */

  /**
   * \fn	int costIfSwap( int currentCost, int i, int j )
   * \brief	Wrapper when user function costIfSwap is not defined.
   * \param	currentCost: the current cost when this function is called.
   *		i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  int costIfSwap( int currentCost, int i, int j );

  /**
   * \fn	int costOnVariable( int k )
   * \brief	Wrapper when user function costOnVariable is not defined.
   * \param	k: the variable on which we project the cost.
   * \return	The cost projected on variable k.
   */
  int costOnVariable( int k );

  /**
   * \fn	void displaySolution( AdData *p_ad )
   * \brief	Wrapper when user function displaySolution is not defined.
   * \param	p_ad: Pointer toward the current configuration (or solution).
   */
  void displaySolution( AdData *p_ad );

  /**
   * \fn	void executedSwap( int k1, int k2 )
   * \brief	Wrapper when user function executedSwap is not defined.
   * \param	k1 and k2: variables to swap.
   */
  void executedSwap( int k1, int k2 );

  /**
   * \fn	int nextI( int i )
   * \brief	Wrapper when user function nextI is not defined.
   * \param	i: a variable.
   * \return	The next variable (i+1)
   */
  int nextI( int i );

  /**
   * \fn	int nextJ( int i, int j )
   * \brief	Wrapper when user function nextJ is not defined.
   * \param	i and j: two variables.
   * \return	The next j-variable (j+1), unless j < 0 (then returns i+1)
   */
  int nextJ( int i, int j );

  /**
   * \fn	int reset( int n, AdData *p_ad )
   * \brief	Wrapper when user function reset is not defined.
   * \param	n: number of reset loop to perform.
   *		p_ad: pointer toward the configuration.
   * \return	The new cost, or -1 if unknown.
   */
  int reset( int n, AdData *p_ad );
};
