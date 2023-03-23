/**
 * generate_password - gerenates a random password of length N
 * main - enetry point of program
 * Return: 0 success
 */

#include <stdlib.h> /* srand() and rand() function library */
#include <time.h> /* time() function librabry*/
#include "main.h"

void generate_password(int N)
{
	int i, rand_num,
	    passwrd_len = N;

	char passwrd[25];

	/* List of character from which passwd is generated */
	char numbers[] = "1234567890";
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = " !@#$%^&_?*@€";
	char UPPERCASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* seeds the random-number generator with
	 * current time so numbers will be different every time*/
	srand((unsigned int) time(NULL));

	/* Traverse over char array to store as finall output */
	for (i = 0; i < passwrd_len; i++)
	{
		rand_num = rand() % 4;

		if (rand_num == 0)
		{
			rand_num = rand() % 10;

			passwrd[i] = numbers[rand_numb];
		}
		else if (rand_num == 1)
		{
			rand_num = rand() % 26;

			passwrd[i] = lowercase[rand_num];
		}
		else if (rand_num == 2)
		{
			rand_num = rand() % 26;

			passwrd[i] = UPPERCASE[rand_num];
		}
		else
		{
			rand_num = rand() % 13;

			passwrd[i] = symbols[rand_num];
		}
	}

	/* prints final output*/
	for (i = 0; i < passwrd_len; i++)
	{
		printf("%c", passwrd[i]);
	}

}

int main(void)
{
	int N = 25;

	generate_password(N);

	return (0);
}
