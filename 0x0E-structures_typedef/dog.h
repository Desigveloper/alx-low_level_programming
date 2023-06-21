#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - defines a struct called dog with 3 elements as basic info
 * @name: first attribute
 * @age: second attribute
 * @owner: third attribute
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* FUNCTION PROTOTYPES */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *d, char *s);
int _strlen(char *str);
#endif /* DOG_H */
