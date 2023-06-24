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
	int num, digit, divisor;
	va_list args;
	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		/* Print each digit of the number separately */
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		divisor = 1;

		while (divisor <= num / 10)
			divisor *= 10;

		while (divisor > 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num %= divisor;
			divisor /= 10;
		}

		/* Print separator if not last number */
		if (i != n - 1 && separator != NULL)
		{
			while (*separator != '\0')
				_putchar(*separator++);

			_putchar(' ');
		}
	}

	va_end(args);

	_putchar('\n');
}
