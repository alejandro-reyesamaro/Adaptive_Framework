#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_cost.h
 * \brief Strategy Pattern to compute the projected cost on a variable
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

/*!
 * \class StrategyCost strategy_cost.h
 * \brief Strategy Pattern to compute the projected cost on a variable
 */
class StrategyCost
{
    public:
        //! Compute the cost on a variable.
        /*!
        * \param k the variable on which we project the cost.
        * \return The cost projected on variable k.
        */
        virtual int costOnVariable( int k) = 0;
};

