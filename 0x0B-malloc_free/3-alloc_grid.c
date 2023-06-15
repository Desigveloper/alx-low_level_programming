/**
 * alloc_grid - a pointer to a 2 dimensional array of int
 *
 * @width: width of arr1
 * @height: height of arr
 *
 * Return: If width or height is 0 or negative, return NULL
 */

#include "main.h"

int **alloc_grid(int width, int height)
{
	int i, j;
	int **num;

	if (width <= 0 || height <= 0)
		return (NULL);

	num = (int **)malloc(sizeof(int *) * height);

	if (num == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(num + i) = (int *)malloc(sizeof(int) * width);

		if (*(num + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(num + j));
			free(num);
				return (NULL);
		}

		for (j = 0; j < width; j++)
			*(*(num + i) + j) = 0;
	}

	return (num);
}

