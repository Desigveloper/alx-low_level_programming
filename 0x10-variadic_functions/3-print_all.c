/**
 * print_all- prints any passed argument followed by a newline
 * @format:  string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	p_data data = {0};

	va_start(args, format);

	for (i = 0; format && *(format + i); i++)
	{
		switch (*(format + i))
		{
			case 'c':
				data.c = va_arg(args, int);
				printf("%c", data.c);
				break;
		       	case 'i':
				data.num = va_arg(args, int);
				printf("%d", data.num);
				break;
			case 'f':
				data.fnum = va_arg(args, double);
				printf("%f", data.fnum);
				break;
			case 's':
				data.str = va_arg(args, char *);
				if (data.str == NULL)
					printf("(nil)");
				else
					printf("%s", data.str);
				break;
		}
	}
	va_end(args);

	printf("\n");
}
