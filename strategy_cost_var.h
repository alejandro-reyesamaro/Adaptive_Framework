/**
 * Adaptive search C++
 *
 * \file strategy_cost_var.h
 * \brief Strategy Pattern to compute the projected cost on a variable
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class StrategyCostVar strategy_cost_var.h
 * \brief Strategy Pattern to compute the projected cost on a variable
 */
class StrategyCostVar
{
 public:

  /**
   * \fn	int costOnVariable( int k )
   * \brief	Wrapper when user function costOnVariable is not defined.
   * \param	k: the variable on which we project the cost.
   * \return	The cost projected on variable k.
   */
  virtual int costOnVariable( int k ) = 0;
};
