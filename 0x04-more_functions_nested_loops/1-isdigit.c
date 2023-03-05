#include "main.h"

/**
 * _isdigit - Checks if an input is a digit 0-9
 * @c: parameter
 * Return: Returns 1 if true else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
