#include "dog.h"
#include <stdlib.h>
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
	int len_n = _strlen(name);
	int len_o = _strlen(owner);
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((len_n + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((len_o + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->name, name);
	dog->age = age;

	return (dog);
}

/**
 * _strcpy - returns length of string
 * @str: the string to evaluate
 *
 * Return: length od string
 */

int _strcpy(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies the string with null byte ('\0') from source poited by s
 * to buffer pointed by d (destination)
 * @s: str to be copied
 * @d: Pointer to buffer where str will be pasted
 *
 * Return: destination pointer
 */

char *_strcpy(char *d, char *s)
{
	int len = 0, j;

	while (*(s + len) != '\0')
		len++;

	for (j = 0; j < len; j++)
	{
		d[j] = s[j];
	}

	d[j] = '\0';

	return (d);
}
