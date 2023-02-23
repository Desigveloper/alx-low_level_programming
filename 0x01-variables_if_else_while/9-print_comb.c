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
		putchar(32); /* ASCII code for comma */
		num++;
	} while (num <= 57);

	putchar(10); /* ASCII code for new line */
	return (0);
}
