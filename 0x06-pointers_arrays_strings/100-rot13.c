/**
 * rot13 - rotates(shift) each char 13 places using ROT13 Cipher(Ceaser)
 * @str: string to rotate
 * Return: rotated string
 */

#include "main.h"

char *rot13(char *str)
{
	int i;
	int j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (input[j] == *(str + i))
			{
				*(str + i) = output[j];
				break;
			}
		}
	}

	return (str);
}
