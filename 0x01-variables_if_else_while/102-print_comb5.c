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
	int ch1 = 48, ch2 = 48;

	while(ch1 <= 57 && ch2 <= 57)
	{
		putchar((ch1 / 10) + 48);
		putchar((ch1 % 10) + 48);
		putchar(32);

		putchar(ch2 / 10);
		putchar(ch2 % 10);

		if(ch1 != 9 && ch2 != 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10); /* ASCII code for new line*/
	return (0);
}
