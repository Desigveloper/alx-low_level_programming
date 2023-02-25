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

	for (ch1 = 0; ch1 <= 99; ch1++)
		for (ch2 = 0; ch2 <= 2; ch2++)
		{
		putchar((ch1 / 10) + 48);
		putchar((ch1 % 10) + 48);
		putchar(32); /*ASCII for space*/

		putchar(ch2 / 10);
		putchar(ch2 % 10);

		putchar(44); /*ASCII for comma*/
		putchar(32); /* ASCII for space*/
		}


	putchar(10); /* ASCII code for new line*/
	return (0);
}
