#include <stdio.h>
/**
 * main -  The entry point
 *
 * Return: Always returns 0
 */
int main(void)
{
	int num;

	num = 0;

	do {
		putchar('0' + num);
		num++;
	} while (num < 10);

	putchar('\n');
	return (0);
}
