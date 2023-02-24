/**
 * main - The entry and termination point of the program
 *
 * Return: Always returns 0 (Success)
 */

#include <stdio.h>
int main(void)
{
	int ch1, ch2;

	for (ch1 = 48; ch1 <= 56; ch1++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			if (ch1 == ch2)
			{
				continue;
			} else
			{
				if (ch1 < ch2)
				{
					putchar(ch1);
					putchar(ch2);
					if (ch1 != 56 || ch2 != 57)
					{
						putchar(44); /*ASCII character for comma*/
						putchar(32); /*ASCII character for space*/
					}
				}
			}
		}
	}

	putchar(10);/*ASCII character for new line*/
	return (0);
}
