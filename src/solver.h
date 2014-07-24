#pragma once

/**
 * Adaptive search C++
 *
 * \file solver.h
 * \brief Solver mother class
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-10
 */

#include "ad_data.h"
#include "benchmark.h"

#include <memory>

/*!
 * \class Solver olver.h
 * \brief Solver mother class
 */
class Solver
{
    public:
        //! The unique constructor for Solver
        Solver();

        //! Main method to solve the Benchmark
        /*!
        * \param bm Pointer to the problem to solve
        * \return The information about the run
        */
        virtual AdData solve(std::shared_ptr<Benchmark> bm) = 0;

    protected:
        //! Virtual method to build the right AdData (parallel or sequential)
        virtual AdData factoryAdData() = 0;

        //! Solver information
        AdData data;
};
