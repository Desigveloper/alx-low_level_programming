#include "main.h"

/**
 * _islower - Chect is a charater a character is a alphabet. Return 1 if true else 0
 * @c: argument- takes an int value and pass to the function at execution
 * Return: Returns 1 (Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	return (0);
}
