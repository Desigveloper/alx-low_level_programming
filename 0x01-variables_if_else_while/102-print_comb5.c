/**
* main - The entry and termination point of the program
*
* This program prits the possible combinations of two two-digit numbers.
*
* Return: Always return 0 (success)
*/
#include <stdio.h>
int main(void)
{
	int ch1, ch2;

	for (ch1 = 48; ch1 <= 57; ch1++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			putchar(ch1);
			putchar(ch2);
			putchar(44);
			putchar(32);
		}
	}

	putchar(10); /* ASCII code for new line*/
	return (0);
}
