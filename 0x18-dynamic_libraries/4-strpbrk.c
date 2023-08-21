#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{

		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s += i;
				return (s);
			}

		}
	}

	return ((void *)0);
}
