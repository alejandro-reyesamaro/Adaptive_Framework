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
 * \file factory_data.hpp
 * \brief Factory Method pattern to build AdData
 * \author Florian Richoux
 * \date 2013-02-04
 */

/**
 * \class FactoryData factory_data.hpp
 * \brief Factory Method pattern to build AdData
 */
class FactoryData
{
public:
  /**
   * \fn	AdData createData()
   * \brief	Pure virtual function to instantiate and return the correct struture AdData (sequential or parallel).
   * \return	The instantiated structure AdData.
   */
  AdData createData() = 0;
};
