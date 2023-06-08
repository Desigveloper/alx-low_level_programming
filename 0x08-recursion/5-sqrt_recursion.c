/**
 * _sqrt_recursion - calculates and returns the natural square root of a number
 * @x: param,  an integer representing base
 * @y: param, an integer representing  exponent
 *
 * Return: value of x power y if success, 1 if y is 0, or -1 as an error
 */

#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0 || n == 1)
	{
		return n;
	}

	return sqrt_helper_func(n, 1, n);
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
	int iMid = (iStart + iEnd) / 2;

	if (iStart > iEnd)
	{
		return iEnd;
	}
	

	if (iMid * iMid == iNum)
	{
		return iMid;
	}
	else if (iMid * iMid > iNum)
	{
		return sqrt_helper_func(iNum, iStart, iMid - 1);
	}
	else
	{
		return sqrt_helper_func(iNum, iMid + 1, iEnd);
	}
}
