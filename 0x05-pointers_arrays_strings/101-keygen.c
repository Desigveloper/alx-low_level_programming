/**
 * generate_password - gerenates a random password of length N
 * main - enetry point of program
 * Return: 0 success
 */

#include <stdlib.h> /* srand() and rand() function library */
#include <time.h> /* time() function librabry*/
#include "main.h"

void generate_password(void)
{
	int i, j, sum = 0;
	int passwd[100];

	 /* seeds the random-number generator with
	  * * current time so numbers will be different every time */
	srand((unsigned int) time(NULL));

	for (i = 0; i < 100; i++)
	{
		passwd[i] = rand() % 78;

		sum += (passwd[i] + '0');
		putchar(passwd[i] + '0');

		if ((2772 - sum)- '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}
}

int main(void)
{

	generate_password();

	return (0);
}
