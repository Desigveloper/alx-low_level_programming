/**
 * cap_string - capitalizes all words in string
 * @str: string to capitalize
 * Return: capitalized string
 */

#include "main.h"

char *cap_string(char *str)
{
	int i;
	int j;
	char ch[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}

		for  (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] == str[i])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
