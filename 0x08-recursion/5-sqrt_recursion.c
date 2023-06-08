/**
 * _sqrt_recursion - calculates and returns the natural square root of a number
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

	return (sqrt_helper_func(n, 1, n)); /* recursive call */
}

/**
 * sqrt_helper_func - a recursive helper function that takes three arguments
 * @iNum: param1, an integer
 * @iStart: param2, the starting point
 * @iEnd: param3: the ending point.
 *
 * Return: n or the dermined value aftersearch
 */

int sqrt_helper_func(int iNum, int iStart, int iEnd)

{
	if (iStart > iEnd)
	{
		return (iEnd);
	}

	int iMid = (iStart + iEnd) / 2;

	if (iMid * iMid == iNum) /* found the sqrt */
	{
		return (iMid);
	}
	else if (iMid * iMid > iNum) /* search in the lower half */
	{
		return (sqrt_helper_func(iNum, iStart, iMid - 1));
	}
	else /* search in the upper half */
	{
		return (sqrt_helper_func(iNum, iMid + 1, iEnd));
	}
i}
