/**
 * array_range - Creates an array of integers from min to max
 * @min: param, minimun integer
 * @max: param, maximum integer
 * Returns: ptr to newly created array or NULL if malloc fails or min > max
 */

#include "main.h"

int *array_range(int min, int max)
{
	int ctr, arr_size, *ptr_arr;
	arr_size = (max - min + 1);

	if (min > max)
		return (NULL);
	
	ptr_arr = malloc(sizeof(int) * arr_size);

	if (ptr_arr == NULL)
		return (NULL);

	for (ctr = 0; ctr <= (max - min); ctr++ )
		*(ptr_arr + ctr) = min + ctr;

	return (ptr_arr);

}
