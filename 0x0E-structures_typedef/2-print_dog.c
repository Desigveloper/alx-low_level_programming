/**
 * print_dog - prints dog's attributes
 * @d: pointer to struct
 * Return: nothing
 */

#include "dog.h"
i
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
