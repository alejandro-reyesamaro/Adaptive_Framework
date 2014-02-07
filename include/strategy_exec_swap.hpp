/*
 * Adaptive search C++ is an C++ implementation of the 
 * Adaptive search algorithm 
 * (see Codognet and Diaz 2001, http://dl.acm.org/citation.cfm?id=668485).
 * Please visit https://github.com/richoux/Adaptive_Search_Cpp 
 * for further information.
 * 
 * Copyright (C) 2013-2014 Florian Richoux
 *
 * This file is part of Adaptive search C++.
 * Adaptive search C++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Adaptive search C++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with  Adaptive search C++. If not, see http://www.gnu.org/licenses/.
 */


/**
 * Adaptive search C++
 *
 * \file strategy_exec_swap.hpp
 * \brief Strategy Pattern to execute a swap
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyExecSwap strategy_exec_swap.hpp
 * \brief Strategy Pattern to execute a swap
 */
class StrategyExecSwap
{
 public:

  /**
   * \fn	void executedSwap( int k1, int k2 )
   * \brief	Virtual wrapper when user function executedSwap is not defined.
   * \param	k1 and k2: variables to swap.
   */
  virtual void executedSwap( int k1, int k2 ) = 0;
};
