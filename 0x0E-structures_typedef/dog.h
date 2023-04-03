#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
