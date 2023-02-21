#include <stdio.h>
/**
 * main = The enty point 
 *
 * Return: Always returns the passed number
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}	

	putchar('\n');
	return (0);
}
