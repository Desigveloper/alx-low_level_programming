/**
 * free_dog - frees memory allocated for struct dog
 * @d: struct dog to be freed
 */

#include "dog.h"

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

