#pragma once

/**
 * Adaptive search C++
 *
 * \file default_next_i.h
 * \brief Default strategy to return the next i (variable) to consider
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-14
 */

#include "strategy_next_i.h"

/*!
 * \class DefaultNextI default_next_i.h
 * \brief Default strategy to return the next i (variable) to consider
 */
class DefaultNextI : public StrategyNext_I
{
    public:
        //! Constructor
        DefaultNextI();

        //! Wrapper when user function nextI is not defined.
        /*!
        * \param i A variable.
        * \return The next variable (i+1)
        */
        int nextI( int i );
};
