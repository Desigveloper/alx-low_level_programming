/**
 * _realloc - Reallocates memory block
 * @ptr: param, pointer to old memry
 * @old_size: param, old memry size
 * @new_size: param, new memory size
 *
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new_ptr;
	int i;
	unsigned int n;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		*(new_ptr + i) = *(ptr + i);

	free(ptr);

	return (new_ptr);
}
