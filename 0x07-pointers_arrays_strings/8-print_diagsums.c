/**
 * print_diagsums - Calc and prints the sum of the 2 diagonals of a sqr matrix.
 * 
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Return: void
 */

#include "main.h"

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + (size - i - 1)));
	}

	printf("%d, %d\n", sum1, sum2);
}
