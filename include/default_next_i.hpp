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
 * \file default_next_i.hpp
 * \brief Default strategy to return the next i (variable) to consider
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultNextI default_next_i.hpp
 * \brief Default strategy to return the next i (variable) to consider
 */
class DefaultNextI : public StrategyNextI
{
 public:

  /**
   * \fn	int nextI( int i )
   * \brief	Wrapper when user function nextI is not defined.
   * \param	i: a variable.
   * \return	The next variable (i+1)
   */
  int nextI( int i );
};
