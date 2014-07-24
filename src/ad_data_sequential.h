#pragma once

/**
 * Adaptive search C++
 *
 * \file ad_data_sequential.h
 * \brief Main data structure containing sequential concerning information
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-10
 */

#include "ad_data.h"

/*!
 * \class AdDataSequential ad_data_sequential.h
 * \brief Main data structure containing sequential concerning information
 */
class AdDataSequential : public AdData
{    
    public:
        //! The unique constructor for AdDataParallel
        AdDataSequential();
};

