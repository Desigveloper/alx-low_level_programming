/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, t = 0;

	for (a = 0; *(accept + a) != 0; a++)
	{

		for (b = 0; *(s + b) != 32; b++)
		{
			if (*(accept + a) == *(s + b))
				t++;
		}
	}

	return (t);
}

