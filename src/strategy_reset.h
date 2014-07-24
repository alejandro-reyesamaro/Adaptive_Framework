#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_reset.h
 * \brief Strategy Pattern to perform a reset
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

#include "ad_data.h"

#include <memory>

/*!
 * \class StrategyReset strategy_reset.h
 * \brief Strategy Pattern to perform a reset
 */

class StrategyReset
{
    public:
        //! Perform a reset
        /*!
        * \param n number of reset loop to perform.
        * \param p_ad pointer toward the configuration.
        * \return The new cost, or -1 if unknown.
        */
        virtual int reset(int n, std::shared_ptr<AdData> data) = 0;
};

