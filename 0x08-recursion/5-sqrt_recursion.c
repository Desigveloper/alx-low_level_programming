/**
 * _sqrt_recursion - Takes an int n and returns its natural sqrt using recursion
 * @n: param,  an integer representing number to be checked
 *
 * Return: value of n , or -1 as an error
 */

#include "main.h"


int _sqrt_recursion(int n)
{
	if (n < 0) /* error case */
	{
		return (-1);
	}

	if (n == 0 || n == 1) /* base case */
	{
		return (n);
	}

	return (sqrt_helper_func(n, 0)); /* recursive call */
}


/**
 * sqrt_helper_func - a recursive helper function that takes three arguments
 * @iNum: param1, an integer
 * @iRoot: param2, root of the number
 *
 * Return: n or the dermined value aftersearch
 */

int sqrt_helper_func(int iNum, int iRoot)

{

	if (iRoot * iRoot == iNum) /* found the sqrt */
	{
		return (iRoot);
	}
	else if (iMid * iMid > iNum) /* search in the lower half */
	{
		return (-1);
	}
	else /* search in the upper half */
	{
		return (sqrt_helper_func(iNum, iMid + 1));
	}
}

