#pragma once

/**
 * Adaptive search C++
 *
 * \file default_reset.h
 * \brief Default strategy to perform a reset
 * \author Florian Richoux, Alejandro Reyes
 * \date 2013-07-14
 */

#include "strategy_reset.h"
/*!
 * \class DefaultReset default_reset.h
 * \brief Default strategy to perform a reset
 */
class DefaultReset : public StrategyReset
{
    public:
        //! Constructor
        DefaultReset();

        //! Wrapper when user function reset is not defined.
        /*!
        * \param n Number of reset loop to perform.
        * \param p_ad Pointer toward the configuration.
        * \return The new cost, or -1 if unknown.
        */
        int reset( int n, std::shared_ptr<AdData> data );
};
