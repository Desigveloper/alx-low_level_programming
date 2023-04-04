#ifndef DOG_H
#define DOG_H

/* clang standard libraries */
#include <stdio.h>

/**
 * struct dog - define a dog basic info
 * @name: first attribute
 * @age: second attribute
 * @owner: third attribute
 */
struct dog
		{
			char *name;
			float age;
			char *owner;
		};

/* New type of struct dog */
typedef struct dog dog_t;

/* Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *d, char *s);

#endif
