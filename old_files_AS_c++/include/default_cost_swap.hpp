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
 * \file default_cost_swap.hpp
 * \brief Default strategy to compute the cost of a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultCostSwap default_cost_swap.hpp
 * \brief Default strategy to compute the cost of a swap
 */
class DefaultCostSwap : public StrategyCostSwap
{
 public:

  /**
   * \fn	int costIfSwap( int currentCost, int i, int j )
   * \brief	Wrapper when user function costIfSwap is not defined.
   * \param	currentCost: the current cost when this function is called.
   *		i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  int costIfSwap( int currentCost, int i, int j );
};
