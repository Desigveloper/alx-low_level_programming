/**
  * _strchr - search a string for a set of bytes
  * @s: string to be searched
  * @c: chararter to be located
  *
  * Return: a pointer to the first occurence or NULL if none
  */

#include "main.h"

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);

}
