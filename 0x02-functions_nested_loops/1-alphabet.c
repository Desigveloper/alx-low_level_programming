#include "main.h"

/**
 * main - Entey point and termination point of the program
 * print_alphabet - Prints all lower case alphabets to z
 *Return: Always returns 0 (Succes)
*/

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar(10);
}
