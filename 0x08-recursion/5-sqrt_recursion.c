/**
 * _sqrt_recursion - calculates and returns the natural square root of a number
 * @n: param,  an integer representing number to be checked
 *
 * Return: value of n , or -1 as an error
 */

#include "main.h"

int _sqrt_recursion(int n)
{
	int i = 1, iResult = 1;

	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return n;
	}


	for (; iResult <= n; i++)
	{
		iResult = i * i;
	}

	return _sqrt_recursion(n - (i - 1)) + (i - 1);
}
