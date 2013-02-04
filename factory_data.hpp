/**
 * Adaptive search C++
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
  AdData createData() = 0;
};
