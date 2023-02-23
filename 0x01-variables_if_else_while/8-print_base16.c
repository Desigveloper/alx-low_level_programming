/**
 * main - The entry point of the program
 *
 * Return: Always return 0 as the value passed
 */

#include <stdio.h>
int main(void)
{
	char ch;
	int num;

	for (num = 48; num <= 56; num++)
	{
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
