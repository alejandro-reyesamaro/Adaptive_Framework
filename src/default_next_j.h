#pragma once

/**
 * Adaptive search C++
 *
 * \file default_next_j.h
 * \brief Default strategy to return the next j (value) to consider, given i (variable)
 * \author Florian Richoux, Alejandro Reyes
 * \date 2013-07-14
 */

#include "strategy_next_j.h"

/*!
 * \class DefaultNextJ default_next_j.h
 * \brief Default strategy to return the next j (value) to consider, given i (variable)
 */
class DefaultNextJ : public StrategyNext_J
{

    public:
        //! Constructor
        DefaultNextJ();

        //! Wrapper when user function nextJ is not defined.
        /*!
        * \param i a variable
        * \param j a variable
        * \return The next j-variable (j+1), unless j < 0 (then returns i+1)
        */
        int nextJ( int i, int j );
};
