/**
 * cap_string - capitalizes all words in string
 * @str: string to capitalize
 * Return: capitalized string
 */

#include "main.h"

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 20)
			str[i + 1] = str[i] - 32;
	}
	return (str);
}
