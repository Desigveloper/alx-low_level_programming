/**
 * _atoi - converts string to int
 * @s: param
 * Retrun: returns int or 0
 */
#include "main.h"

int _atoi(char *s)
{
	int i = 0, num = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9' || s[i] == '-')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			continue;;
		}

	}

	if (num == NULL)
		return (0);
	else
		return (num);

}
