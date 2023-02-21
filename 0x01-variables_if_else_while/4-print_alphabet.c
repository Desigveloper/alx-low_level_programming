#include <stdio.h>

/**
 * main - The entry point of program
 *
 * Return: Always returns 0
 */
int main(void)
{
	for (char ch = 'a';  ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
		putchar(ch);
	}

	return (0);
}
