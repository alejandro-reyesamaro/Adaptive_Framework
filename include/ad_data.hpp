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
 * \file ad_data.hpp
 * \brief Main data structure  
 * \author Florian Richoux
 * \date 2013-02-04
 */

/**
 * \class AdData ad_data.hpp
 * \brief Main data structure 
 */
class AdData
{
public:
				/* --- input: basic data --- */

  int size;			/**< nb of variables */
  int do_not_init;		/**< use the initial solution (else random permut) */
  int *actual_value;		/**< if random permut: actual values */
  int base_value;		/**< if random permut: base value */
  int debug;			/**< debug level (0 1 2) */
  int break_nl;			/**< to display a matrix (nb of columns or 0) */
  char *log_file;		/**< name of the log file or NULL */

				/* --- input: tuning parameters --- */

  int exhaustive;		/**< perform an exhausitve search */
  int first_best;		/**< stop as soon as a better swap is found */
  int prob_select_loc_min;	/**< proba (percent) to select local min instead of staying on a plateau (or >100 to not use)*/
  int freeze_loc_min;		/**< nb swaps to freeze a (local min) var */
  int freeze_swap;		/**< nb swaps to freeze 2 swapped vars */
  int reset_limit;		/**< nb of frozen vars before reset */
  int nb_var_to_reset;		/**< nb variables to reset */
  int restart_limit;		/**< nb of iterations before restart */
  int restart_max;		/**< max nb of times to restart (to retry) */
  int reinit_after_if_swap;	/**< true if costOfSolution must be called twice */

				/* --- input / output: solution --- */

  int *sol;			/**< the array of variables */
  int size_in_bytes;		/**< size in bytes of sol */

				/* --- output: info / counters --- */

  int total_cost;		/**< total cost of the current solution */
  int nb_restart;		/**< nb of restarts */

  int nb_iter;			/**< nb of iterations (can also be used as current no for marks) */
  int nb_swap;			/**< nb of swaps (used as current no for marks) */
  int nb_same_var;		/**< nb of vars with highest cost */
  int nb_reset;			/**< nb of resets */
  int nb_local_min;		/**< nb of local mins */

				/**< same counters across restarts */
  int nb_iter_tot;		/**< nb of iterations total */
  int nb_swap_tot;		/**< nb of swaps total */
  int nb_same_var_tot;		/**< nb of vars with highest cost total */
  int nb_reset_tot;		/**< nb of resets total */
  int nb_local_min_tot;		/**< nb of local mins total */


					/* --- other values (e.g. from main) not used by the solver engine --- */

  int		param;			/**< command-line integer parameter */
  char		param_file[512];        /**< command-line file name parameter */
  int		seed;			/**< random seed (or -1 if any) */
  int		reset_percent;		/**< percentage of variables to reset */
  int		data32[4];		/**< some 32 bits  */
  long long	data64[2];		/**< some 64 bits  */  
};
