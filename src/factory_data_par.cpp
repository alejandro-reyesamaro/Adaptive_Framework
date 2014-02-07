/**
 * Adaptive search C++
 *
 * \file factory_data_par.cpp
 * \brief Implementation of the Factory Method pattern to build AdDataParallel
 * \author Florian Richoux
 * \date 2013-02-04
 */

#include "factory_data_par.hpp"

AdData FactoryDataPar::createData()
{
  return new AdDataParallel();
}
