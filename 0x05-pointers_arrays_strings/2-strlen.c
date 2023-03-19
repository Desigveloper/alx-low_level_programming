/**
 * _strlen - prints the lenght of a giving string
 * @s: String param
 * return: Return the length of the string
 */
#include "main.h"
#include <string.h>

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	return (len);
}
