/**
 * main - The entry and termination point of the program
 *
 * Return: Always returns 0
 */

int main(void)
{
	int num = 48;

	do {
		putchar(num);
		putchar(',');
		num++;
	} while (num <= 57);

	putchar('10');
	return (0);
}
