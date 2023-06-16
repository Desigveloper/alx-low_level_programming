/**
 * array_range - Creates an array of integers from min to max
 * @min: param, minimun integer
 * @max: param, maximum integer
 * Returns: ptr to newly created array or NULL if malloc fails or min > max
 */

#include "main.h"

int *array_range(int min, int max)
{
	unsigned int ctr *ptr_arr;

	if (min > max)
		return (NULL);
	
	ptr_arr = malloc(sizeof(int) * (max - min + 1));

	if (ptr_arr == NULL)
		return (NULL);

	for (ctr = 0; ctr < (max - min); ctr++ )
		*(ptr_arr + ctr) = min + ctr;

	retrun (ptr_arr);

}
