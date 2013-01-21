/**
 * Adaptive search C++
 *
 * \file default_cost_var.h
 * \brief Default strategy to compute the projected cost on a variable
 * \author Florian Richoux
 * \date 2013-01-21
 */

/**
 * \class DefaultCostVar default_cost_var.h
 * \brief Default strategy to compute the cost of a swap
 */
class DefaultCostVar : public StrategyCostVar
{
 public:

  /**
   * \fn	int costOnVariable( int k )
   * \brief	Virtual wrapper when user function costOnVariable is not defined.
   * \param	k: the variable on which we project the cost.
   * \return	The cost projected on variable k.
   */
  int costOnVariable( int k )
  {
    fprintf( stderr, "%s:%d: error: wrapper Cost_On_Variable function called\n",
	     __FILE__, __LINE__ );
    return 0;
  }
};
