#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int a, b;

	for (a = 0; *(s + a) != 0; a++)
	{
		;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == *(s + b))
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
