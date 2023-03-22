/**
 * _atoi - converts string to int
 * @s: param
 * Return: returns int or 0
 */
#include "main.h"

int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1, isi = 0;

	for (; s[i] != '\0'; i++)

	{
		if (s[i] == '-')
			sign *= -1;

		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			isi = 1;
			num = num * 10 + (s[i] - '0');
		}

	if (isi == 1)
	{
		break;
	}

	}

	num *= sign;
	return (num);
}
