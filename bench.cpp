/**
 * Adaptive search C++
 *
 * \file bench.cpp
 * \brief Benchmark mother class 
 * \author Florian Richoux
 * \date 2013-01-21
 */

#include "bench.h"

int Bench::costIfSwap( int currentCost, int i, int j )
{
  return strategyCostSwap.costIfSwap( currentCost, i, j );
}

int Bench::costOnVariable( int k )
{
  return strategyCostOnVar.costOnVariable( k );
}

void Bench::displaySolution( AdData *p_ad )
{
  strategyDisplaySol.displaySolution( p_ad );
}

void Bench::executedSwap( int k1, int k2 )
{
  strategyExecSwap.displaySolution( p_ad );
}

int Bench::nextI( int i )
{
  return strategyNextI.nextI( i );
}

int Bench::nextJ( int i, int j )
{
  return strategyNextJ.nextJ( i, j );
}

int Bench::reset( int n, AdData *p_ad )
{
  return strategyReset.reset( n, p_ad );
}
