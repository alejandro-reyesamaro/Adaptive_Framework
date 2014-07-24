#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_next_i.h
 * \brief Strategy Pattern to return the next i (variable) to consider
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

/*!
 * \class StrategyNext_I strategy_next_i.h
 * \brief Strategy Pattern to return the next i (variable) to consider
 */
class StrategyNext_I
{
    public:
        //! Return the next variable, given a variable
        /*!
        * \param i a variable.
        * \return The next variable (i+1)
        */
        virtual int nextI(int i) = 0;
};
