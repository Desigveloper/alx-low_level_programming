/**
 * new_dog - creates a new dog
 * @name: pointer to char array
 * @age: age of dog
 * @owner: pointer to char array owner of dog
 *
 * Return:  pointer to new dog or NULL if failure
 */

#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for the new dog */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name string and copy its value */
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	/* Allocate memory for the owner string and copy its value */
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	/* Set the age value */
	new_dog->age = age;
	return (new_dog);
}
