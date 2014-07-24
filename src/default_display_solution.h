#pragma once

/**
 * Adaptive search C++
 *
 * \file default_display_solution.h
 * \brief Default strategy to display the solution
 * \author Florian Richoux, Alejandro Reyes
 * \date 2013-07-14
 */

#include "strategy_display_solution.h"

/*!
 * \class DefaultDisplaySol default_display_solution.h
 * \brief Default strategy to display the solution
 */
class DefaultDisplaySolution : public StrategyDisplaySolution
{

    public:
        //! Constructor
        DefaultDisplaySolution();

        //! Wrapper when user function displaySolution is not defined.
        /*!
        * \param p_ad Pointer toward the current configuration (or solution).
        */
        void displaySolution( std::shared_ptr<AdData> p_ad );
};
