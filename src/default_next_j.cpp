/**
 * Adaptive search C++
 *
 * \file default_next_j.cpp
 * \brief Default strategy to return the next j (value) to consider, given i (variable)
 * \author Florian Richoux
 * \date 2013-01-21
 */

int DefaultNextJ::nextJ( int i, int j )
{
  if ( j < 0 )
    j = i;
  return j + 1;
}
