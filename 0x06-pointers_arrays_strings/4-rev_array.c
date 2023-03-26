/**
 * reverse_array - reverses an arrar of characters
 * @a: array of characters
 * @n: number of elements reverse
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int mid;

	mid = n  / 2;

	for (i = 0; i <  mid; i++)
	{
		temp = a[i];
		a[i] = a[mid - i - 1];
		a[mid - i - 1] = temp;
	}
}
