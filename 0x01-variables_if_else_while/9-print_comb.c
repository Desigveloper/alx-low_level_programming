/**
 * main - The entry and termination point of the program
 *
 * Return: Always returns 0
 */

int main(void)
{
	int  num;

	for (num = 48; num <= 57; num++) 
	{
		putchar(num);
		putchar(44); /* ASCII code for comma */
		putchar(32);
	}

	putchar(10); /* ASCII code for new line */
	return (0);
}
