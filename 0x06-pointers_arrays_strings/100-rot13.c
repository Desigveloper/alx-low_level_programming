/**
 * rot13 - rotates(shift) each char 13 places using ROT13 Cipher(Ceaser)
 * @str: string to rotate
 * Return: rotated string
 */

#include "main.h"

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (; j < 52; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}

	return (str);
}
