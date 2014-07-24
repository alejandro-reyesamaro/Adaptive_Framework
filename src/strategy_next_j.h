#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_next_j.h
 * \brief Strategy Pattern to return the next j (value) to consider, given i (variable)
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

/*!
 * \class StrategyNext_J strategy_next_j.h
 * \brief Strategy Pattern to return the next j (value) to consider, given i (variable)
 */
class StrategyNext_J
{
    public:
        //! Return the next value to consider, given a variable
        /*!
        * \param i variable.
        * \param j variable.
        * \return The next j-variable (j+1), unless j < 0 (then returns i+1)
        */
        virtual int nextJ(int i, int j) = 0;
};

