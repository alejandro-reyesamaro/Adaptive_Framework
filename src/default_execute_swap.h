#pragma once

/**
 * Adaptive search C++
 *
 * \file default_execute_swap.h
 * \brief Default strategy to execute a swap
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-14
 */

#include "strategy_execute_swap.h"

/*!
 * \class DefaultExecSwap default_execute_swap.h
 * \brief Default strategy to execute a swap
 */
class DefaultExecuteSwap : public StrategyExecuteSwap
{

    public:
        //! Constructor
        DefaultExecuteSwap();

        //! Wrapper when user function executedSwap is not defined.
        /*!
        * \param k1 first variable to swap.
        * \param k2 second variable to swap.
        */
        void executeSwap( int k1, int k2 );
};
