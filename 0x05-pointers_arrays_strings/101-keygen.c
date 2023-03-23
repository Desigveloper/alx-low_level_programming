/**
 * generate_password - gerenates a random password of length N
 * Return: nothing
 */

#include <stdlib.h>
#include <time.h>

void generate_password(void)
{
	int i,
	    passwd_len = 8;

	/* List of character from which pass is generated */
	char list[] = "1234567890abcdefghijklmnopqrstuvwxyz!@#$%^&_?\
		ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* seeds the random-number generator with
	 * current time so numbers will be different every time*/
	srand((unsigned int) time(NULL));

	for (i = 0; i < passwd_len; i++)
	{
		printf("%c", list[rand() % (sizeof list -1)]);
	}

}
