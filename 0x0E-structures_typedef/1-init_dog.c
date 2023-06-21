/**
 * init_dog - initializes variable struct dog
 * @d: pointer to struct dog
 * @name: pointer char name to initialize string of char
 * @age: age to initialize
 * @owner: pointer char owner to initialize string of char
*/

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
