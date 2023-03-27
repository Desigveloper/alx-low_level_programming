/**
 * _pow_recursion - calculates the power of a number
 * @x: base number
 * @y: exponent
 * Return: the product
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return 1;

	return (x * pow_recursion(x, y - 1));
 
}
