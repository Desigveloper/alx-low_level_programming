/**
 * main - the entry point
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 (success) or 1 if an error
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int iCent, iCoins;

	if (argc < 2 || argc > 2)
	{
		puts("Error");
		return (1);
	}

	iCents = atoi(argv[1]);

	if (iCents < 0)
	{
		put("0");
		return (0);
	}

	iCoins = 0;

	iCoins += iCent / 25;
	iCent %= 25;

	iCoins += iCent / 10;
	iCent %= 10;

	iCoins += iCent / 5;
	iCent %= 5;

	iCoins += iCent / 2;
	iCent %= 2;

	iCoin += iCent; /* coin value @ 1 */

	printf("%d\n", iCoins);

	return (0);
}
