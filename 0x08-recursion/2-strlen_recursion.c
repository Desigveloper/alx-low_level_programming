/**
 * _strlen_recursion - prints the length of string recursively
 * @s: param pointer to the string to be printed
 *
 * Return: 0 or length of str if success
 */

#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* recursive call */

}
