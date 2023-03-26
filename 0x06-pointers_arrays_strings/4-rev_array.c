/**
 * reverse_array - reverse an arrar of characters
 * @a: characters param
 * @n: number of reversed characters
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;
	int len = 0

	while (a[i] != '\0')
		len++;

	for (i = len; i >= n; i--)
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
