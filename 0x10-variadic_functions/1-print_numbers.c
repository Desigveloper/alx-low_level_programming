/**
 * print_numbers- prints numbers followed by a newline
 * @separator:  string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		/* Print each digit of the number separately */
		printf("%d", num);

		/* checks if not end  of iterartion or not last number */
		if(i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
