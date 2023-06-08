/**
 * _pow_recursion - calculates the value of x power y recursively
 * @x: param,  an integer representing base
 * @y: param, an integer representing  exponent
 *
 * Return: value of x power y if success, 1 if y is 0, or -1 as an error
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0) /* error case */
		return (-1);
	else if (y == 0) /* base case */
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
