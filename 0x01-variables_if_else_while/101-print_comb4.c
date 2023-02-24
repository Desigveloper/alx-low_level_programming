/**
* main - The entry point.
*
* This program prints the possible combination of three digits.
*
* Return: Always returns 0 (Success)
*/
#include <stdio.h>

int main(void)
{
int ch1, ch2, ch3;

for (ch1 = 48; ch2 <= 55; ch1++)
{
	for (ch2 = 48; ch2 <= 56; ch2++)
	{
		for (ch3 = 48; ch3 <= 57; ch3++)
		{
			if (ch1 == ch2 || ch2 == ch3 || ch1 == ch3)
			{
				continue;
			} else
			{
				if (ch1 < ch2 && ch2 < ch3)
				{
					putchar(ch1);
					putchar(ch2);
					putchar(ch3);
					if (ch1 != 55 || ch2 != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
}
putchar(10); /* ASCII code for new line*/
return (0);
}
