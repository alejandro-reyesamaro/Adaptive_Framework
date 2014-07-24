#pragma once

/**
 * Adaptive search C++
 *
 * \file default_cost_var.h
 * \brief Default strategy to compute the projected cost on a variable
 * \author Florian Richoux, Alejandro Reyes
 * \date 2013-07-14
 */

#include "strategy_cost.h"

/*!
 * \class DefaultCostVar default_cost_var.h
 * \brief Default strategy to compute the projected cost on a variable
 */
class DefaultCostVariable : public StrategyCost
{

    public:
        //! Constructor
        DefaultCostVariable();

        //! Virtual wrapper when user function costOnVariable is not defined.
        /*!
        * \param k The variable on which we project the cost.
        * \return The cost projected on variable k.
        */
        int costOnVariable( int k );
};
