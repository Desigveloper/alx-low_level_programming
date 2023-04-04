#include "dog.h"
/**
 * init_dog - initializes variable struct dog
 * @d: pointer to struct dog
 * @name: pointer name to initialize
 * @age: age to initialize
 * @owner: pointer owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

