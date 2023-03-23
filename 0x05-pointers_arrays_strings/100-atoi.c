/**
 * _atoi - converts string to int
 * @s: param
 * Return: returns int or 0
 */
#include "main.h"

int _atoi(char *s)
{
	int i = 0,
	    min = 1,
	    isi = 0;
	unsigned num = 0;


	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		for (i = i; s[i] >= '0' && s[i] <= '9'; i++)
		{
			isi = 1;
			num = num * 10 + (s[i] - '0');
		}

		if (isi == 1)
		{
			break;
		}
		i++;

	}

	num *= min;
	return (num);
}
