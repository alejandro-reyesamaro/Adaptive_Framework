#include "default_next_j.h"

//! Default strategy to return the next j (value) to consider, given i (variable)
int DefaultNextJ::nextJ( int i, int j )
{
    if ( j < 0 )
        j = i;
    return j + 1;
}
