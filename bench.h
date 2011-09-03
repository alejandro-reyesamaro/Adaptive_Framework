/**
 *  Adaptive search C++
 *
 *  \file bench.h
 *  \brief benchmark mother class 
 *  \author Florian Richoux
 *  \date 2011-09-03
 *
 *  Copyright (C) 2011 JFLI
 */

/**
 * \class Bench bench.h
 */
class Bench
{
 public:
  /*
   * Functions by default
   */

  /**
   * \fn	int Cost_If_Swap(int current_cost, int i, int j)
   * \brief	Wrapper when user function Cost_If_Swap is not defined.
   * \param	current_cost: the current cost when this function is called.
   * \param	i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  int Cost_If_Swap(int current_cost, int i, int j);

  /**
   * \fn	int Cost_On_Variable(int k)
   * \brief	Wrapper when user function Cost_On_Variable is not defined.
   * \param	k: the variable on which we project the cost.
   * \return	The cost projected on variable k.
   */
  int Cost_On_Variable(int k);

  /**
   * \fn	void Display_Solution(AdData *p_ad)
   * \brief	Wrapper when user function Display_Solution is not defined.
   * \param	p_ad: Pointer toward the current configuration (or solution).
   */
  void Display_Solution(AdData *p_ad);

  /**
   * \fn	void Executed_Swap(int k1, int k2)
   * \brief	Wrapper when user function Executed_Swap is not defined.
   * \param	k1 and k2: variables to swap.
   */
  void Executed_Swap(int k1, int k2);

  /**
   * \fn	int Next_I(int i)
   * \brief	Wrapper when user function Next_I is not defined.
   * \param	i: a variable.
   * \return	The next variable (i+1)
   */
  int Next_I(int i);

  /**
   * \fn	int Next_J(int i, int j)
   * \brief	Wrapper when user function Next_J is not defined.
   * \param	i and j: two variables.
   * \return	The next j-variable (j+1), unless j < 0 (then returns i+1)
   */
  int Next_J(int i, int j);

  /**
   * \fn	int Reset(int n, AdData *p_ad)
   * \brief	Wrapper when user function Reset is not defined.
   * \param	n: number of reset loop to perform.
   * \param	p_ad: pointer toward the configuration.
   * \return	The new cost, or -1 if unknown.
   */
  int Reset(int n, AdData *p_ad);
};
