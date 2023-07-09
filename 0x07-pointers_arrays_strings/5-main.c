/**
 * main - check the code
 *
 * Return: Always 0.
 */

#include "main.h"

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}
