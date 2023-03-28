/**
 * _strlen - prints the lenght of a giving string
 * @s: String param
 *
 * Return: returns the length of the string
 */
#include "main.h"

int _strlen(char *s)
{
	int i = 0, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	return (len);
}
