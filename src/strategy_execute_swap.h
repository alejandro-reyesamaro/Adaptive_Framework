#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_execute_swap.h
 * \brief Strategy Pattern to execute a swap
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

/*!
 * \class StrategyExecuteSwap strategy_execute_swap.h
 * \brief Strategy Pattern to execute a swap
 */
class StrategyExecuteSwap
{
    public:
        //! Execute the swap of two given variables
        /*!
        * \param k1 first variable to swap
        * \param k2 second variable to swap
        */
        virtual void executeSwap(int k1, int k2) = 0;
};
