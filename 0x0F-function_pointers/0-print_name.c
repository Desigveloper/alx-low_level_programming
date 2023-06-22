/**
 * print_name - take pointer to cahr atgument and prints to the screen as a name
 * @name: param, pointer to char
 *
 * Return: nothing
 */

#include "main.h"
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
