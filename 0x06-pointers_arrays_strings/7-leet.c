/**
 * leet: changes letters to numbers
 * @str: string param
 * Return: the final letter-num string
 */

#include "main.h"

char *leet(char *str)
{
	int i, j;
	char *ch = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] == str[i])
				str[i] = num[j];
		}
	}
	return (str);
}
