/**
 * Adaptive search C++
 *
 * \file factory_data_seq.hpp
 * \brief Implementation of the Factory Method pattern to build (sequential) AdData
 * \author Florian Richoux
 * \date 2013-02-04
 */

#include "factory_data.hpp"

/**
 * \class FactoryDataSeq factory_data_seq.hpp
 * \brief Implementation of the Factory Method pattern to build (sequential) AdData
 */
class FactoryDataSeq : public FactoryData
{
public:
  /**
   * \fn	AdData createData()
   * \brief	Instantiate and return the correct struture AdData (here sequential).
   * \return	The instantiated structure AdData.
   */
  AdData createData();
};
