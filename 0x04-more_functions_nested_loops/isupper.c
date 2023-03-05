#include "main.h"

/**
 * _isupper - Checks if a charater is an uppercase.
 * @c: argument- takes an int value and pass to the function at execution
 * Return: Returns 1 (Success) if true else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
