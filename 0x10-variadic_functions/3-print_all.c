/**
 * print_all- prints any arg passed based on format str followed by a newline
 * @format:  string to be printed between numbers
 *
 * Return: nothing
 */

#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int i, j;

	inst_of_print_type types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_list args; /* a variable type va_list to hold the variable args */

	va_start(args, format); /* initializes va_list with variable args */

	i = 0;
	/* Loop through each char in format string */
	while (*(format + i) != '\0')
	{
		j = 0;

		/* Loop through each possible arg */
		while (j < 4)
		{
			if (*(format + i) == types[j].type)
				types[j].print(args);
			break;
			j++;
		}
		i++;
	}

	va_end(args); /* Cleans va_list when done using it */

	printf("\n");
}

/**
* print_char - Prints a character argument
* @args: param, list of character args passed
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer argument
 * @args: param, list of integer args passed
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float argument
 * @args: param, list of float args passed
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string argument
 * @args: param, list of string args passed
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
