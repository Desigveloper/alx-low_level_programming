/**
 * string_toupper -  converts srting to upper
 * @str: string to converst
 * Return: the coverted string
 */
#include "main.h"

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}

	return str[i];
}
