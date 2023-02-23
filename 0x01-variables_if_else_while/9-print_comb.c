/**
 * main - The entry and termination point of the program
 *
 * Return: Always returns 0
 */

int main(void)
{
	int  num;
	num = 48;

	do {
		putchar(num);
		putchar(44); /* ASCII code for comma */
		putchar(32);
		num++;
	} while (num <= 57);

	putchar(10); /* ASCII code for new line */
	return (0);
}
