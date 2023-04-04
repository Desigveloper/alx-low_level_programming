#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: pointer to char array
 * @age: age of dog
 * @owner: pointer to char array owner of dog
 *
 * Return:  pointer to new dog or NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0,  dn =  0, od;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (*(name + dn))
	{
		;
		dn++;
	}
	
	dn++;
	dog->name  = malloc(sizeof(char) * dn);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	while (i < dn)
	{
		dog->*(name + i) = *(name + i);
		i++;
	}

	dog->age = age;

	for ( od = 0; owner; od++)
		;
	od++;
	dog->owner = malloc(sizeof(char) * od);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}
	while (i < od)
	{
		dog->*(owner + i) = *(owner + i);
	}

	return (owner);
}
