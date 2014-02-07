/*
 * Adaptive search C++ is an C++ implementation of the 
 * Adaptive search algorithm 
 * (see Codognet and Diaz 2001, http://dl.acm.org/citation.cfm?id=668485).
 * Please visit https://github.com/richoux/Adaptive_Search_Cpp 
 * for further information.
 * 
 * Copyright (C) 2013-2014 Florian Richoux
 *
 * This file is part of Adaptive search C++.
 * Adaptive search C++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Adaptive search C++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with  Adaptive search C++. If not, see http://www.gnu.org/licenses/.
 */


/**
 * Adaptive search C++
 *
 * \file ad_data_parallel.hpp
 * \brief Main data structure for the parallel version
 * \author Florian Richoux
 * \date 2013-02-04
 */

#define RESULTS_CHAR_MSG_SIZE 256 /* with \n */

/**
 * \class AdDataParallel ad_data_parallel.hpp
 * \brief Main data structure for the parallel version
 */
class AdDataParallel : public AdData
{
public:
  char		results[RESULTS_CHAR_MSG_SIZE];		/**< To communicate performances */
  int		*param_a_ptr;				/**< Parameter 'a' for Trident generator */
  int		*param_c_ptr;				/**< Parameter 'c' for Trident generator */
  int		*last_value_ptr;			/**< Last value generated by Trident */
  long int	*print_seed_ptr;			/**< Value to print to redo this scenario */
  time_t	tv_sec;					/**< Time measure */
  int		*count_ptr;
  int		size_message;				/**< Message size = (range + config + stats + etc) */ 
  unsigned int	*block_of_messages;			/**< To store messages, reserve a big block of memory here */
  int		*nb_digits_nbprocs_ptr;			/**< For debuging */
};
