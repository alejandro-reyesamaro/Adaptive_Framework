#pragma once

/**
 * Adaptive search C++
 *
 * \file af_random_tools.h
 * \brief Static class for random functions
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-08-06
 */

/*!
 * \class AF_RandomTools af_random_tools.h
 * \brief Static class for random functions
 */
class AF_RandomTools
{
    public:

        //! Initializes the random number generator with a given seed.
        /*!
        * \param seed Random seed
        */
        static void Randomize_Seed(unsigned seed);

        //! Returns a random real number in [0..1)
        /*!
        * \return Real random number
        */
        static double Random_Double();

        //!  Initializes the random number generator with a random seed.
        /*!
        * \return The seed.
        */
        static unsigned Randomize();

        //! Returns a random number in [0..n-1].
        /*!
        * \param n
        * \return A random number in [0..n-1].
        */
        static unsigned Random(unsigned n);
};

