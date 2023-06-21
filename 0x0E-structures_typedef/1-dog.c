#include "dog.h"

int main(void)
{
	dog_t *new_dog = new_dog("Fido", 2.5, "John");

	if (my_dog == NULL)
	{
		printf("Failed to create a new dog\n");
	}
	else
	{
		printf("Created a new dog named %s\n", my_dog->name);
	}
	return (0);
}
