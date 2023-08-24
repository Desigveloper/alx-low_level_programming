#include <stdio.h>

int is_palindrome(int n);

/**
* main - Entry point of the program
*
* Return: 0 if success
*/

int main(void)
{
	int largest_palindrome = 0;
	int i, j, product;
	FILE *fd;

	/* Iterate through all possible combinations of three-digit numbers */
	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
				largest_palindrome = product;
		}
	}

	/* Save the result in the file 102-result */
	fd = fopen("102-result", "w");

	if (fd  != NULL)
	{
		fprintf(fd, "%d", largest_palindrome);
		fclose(fd);
	}

	return (0);
}

/**
* is_palindrome - Checks if a number is a palindrome
* @n: The number to check
*
* Return: 1 if the number is a palindrome, 0 otherwise
*/
int is_palindrome(int n)
{
	int reverse = 0;
	int original = n;

	while (n != 0)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}

	return (original == reverse);
}
