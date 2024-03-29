/**
 * print_name - prints to the screen a name as argument
 * @name: param, pointer to char
 * @f: pointer to the printing function
 * Return: nothing
 */

#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
