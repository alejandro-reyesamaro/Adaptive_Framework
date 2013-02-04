/**
 * Adaptive search C++
 *
 * \file factory_data_seq.cpp
 * \brief Implementation of the Factory Method pattern to build (sequential) AdData
 * \author Florian Richoux
 * \date 2013-02-04
 */

#include "factory_data_seq.hpp"

AdData FactoryDataSeq::createData()
{
  return new AdData();
}
