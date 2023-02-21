#include <stdio.h>
/**
 * main = The entry point
 *
 * Return : Always returnd 0
 */
int main(void)
{
	int num;

	num = 0;

	do
	{
		putchar((char) num);
		num++;
	} while (num < 10);

	putchar('\n');
	return 0;
}
