/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: A pointer to a pointer to a char.
 * @to: The value to set the pointer to.
 * Return: void
 */

#include "main.h"

void set_string(char **s, char *to)
{
	*s = to;
}
