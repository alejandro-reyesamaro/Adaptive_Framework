/**
 * Adaptive search C++
 *
 * \file magic_square.hpp
 * \brief Magic Square benchmark 
 * \author Florian Richoux
 * \date 2013-01-21
 *
 *  sol[] = vector of values (by line),
 *             sol[0..square_length-1] contain the first line, 
 *             sol[square_length-2*square_length-1] contain the 2nd line, ...
 *             values are in 1..square_length*square_length
 *
 *  The constraints are: for each line, column, diagonal 1 (\) and 2 (/)
 *  the sum must be equal to avg = square_length * (square_length*square_length + 1) / 2;
 *
 *  err_l[i] = -avg + sum of line i
 *  err_c[j] = -avg + sum of column j
 *  err_d1   = -avg + sum of diagonal 1
 *  err_d2   = -avg + sum of diagonal 2
 *
 *                   square_length-1  square_length-1
 *  The total cost = Sum |err_l[i]| + Sum |err_c[i]| + |err_d1| + |err_d2|
 *                   i=0              j=0
 *
 *  The projection on a variable at i, j:
 *  // err_var[i][j] = | err_l[i] + err_c[j] + F1(i,j) + F2(i,j) |  SLOW version
 *  err_var[i][j] = | err_l[i] + err_c[j] + F1(i,j) + F2(i,j) |
 *  with F1(i,j) = err_d1 if i,j is on diagonal 1 (i.e. i=j) else = 0
 *  and  F2(i,j) = err_d2 if i,j is on diagonal 2 (i.e. j=square_length-1-i) else = 0
 */

/**
 * \class MagicSquare magic_square.hpp
 * \brief Magic Square benchmark 
 */
class MagicSquare : public Bench
{
 public:

/*-------*
 * Types *
 *-------*/

  typedef struct
  {
    unsigned int d1:1;
    unsigned int d2:1;
    unsigned int l:15;
    unsigned int c:15;
  } XRef;
  
#define XSet(xr, line, col, diag1, diag2)   xr.l = line; xr.c = col; xr.d1 = diag1; xr.d2 = diag2
#define XGetL(xr)     xr.l
#define XGetC(xr)     xr.c
#define XIsOnD1(xr)   (xr.d1 != 0)
#define XIsOnD2(xr)   (xr.d2 != 0)

/*------------------*
 * Global variables *
 *------------------*/

  static int size;			/* copy of p_ad->size (square_length*square_length) */
  static int *sol;			/* copy of p_ad->sol */
  
  static int square_length;		/* side of the square */
  static int square_length_m1;		/* square_length - 1 */
  static int square_length_p1;		/* square_length + 1 */
  static int avg;			/* sum to reach for each l/c/d */
  
  static int *err_l, *err_l_abs;	/* errors on lines (relative + absolute) */
  static int *err_c, *err_c_abs;	/* errors on columns */
  static int err_d1, err_d1_abs; 	/* error on d1 (\) */
  static int err_d2, err_d2_abs;	/* error on d2 (/) */
  static XRef *xref;
  
/*-----------*
 * Functions *
 *-----------*/

  /**
   * \fn	void solve( AdData *p_ad )
   * \brief	Initializations needed for the resolution.
   * \param	p_ad: Pointer toward the current configuration.
   */
  void solve( AdData *p_ad );

  /**
   * \fn	int costOfSolution( int shouldBeRecorded )
   * \brief	Computes the total cost of the current solution.
   *		Also computes errors on constraints for subsequent calls to costOnVariable, costIfSwap and executedSwap.
   * \param	shouldBeRecorded: dummy input.
   * \return	The cost of the current configuration.
   */
  int costOfSolution( int shouldBeRecorded );

  /**
   * \fn	int costOnVariable( int k )
   * \brief	Evaluates the error on a variable.
   * \param	k: the variable on which we project the cost.
   * \return	The cost projected on variable k.
   */
  int costOnVariable( int k );

  /**
   * \fn	int costIfSwap( int currentCost, int i, int j )
   * \brief	Computes the cost if we swap k1 and k2. No swaps are recorded.
   * \param	currentCost: the current cost when this function is called.
   * \param	i and j, the variables with which we simulate a swap to compute the resulting cost.
   * \return	The cost if we swap variables i and j.
   */
  int costIfSwap( int currentCost, int k1, int k2 );

  /**
   * \fn	void executedSwap( int k1, int k2 )
   * \brief	Records a swap between k1 and k2.
   * \param	k1 and k2: variables to swap.
   */
  void executedSwap( int k1, int k2 );

  /**
   * \fn	void initParameters( AdData *p_ad )
   * \brief	Initializes parameters like freeze_swap, reset_percent, ...
   * \param	p_ad: Pointer toward the current configuration.
   */
  void initParameters( AdData *p_ad );

  /**
   * \fn	int checkSolution( AdData *p_ad )
   * \brief	Checks if the configuration is a solution.
   * \param	p_ad: Pointer toward the current configuration.
   * \return	1 if the configuration is a solution, 0 otherwise.
   */
  int checkSolution( AdData *p_ad );
};
