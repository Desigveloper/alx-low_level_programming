/**
 * _atoi - converts string to int
 * @s: param
 * Retrun: returns int or 0
 */
#include "main.h"

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			return (num);
		}
		else
		{
			break;
			return (0);
		}

	}

}
