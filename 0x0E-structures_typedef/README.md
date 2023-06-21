Project 0x0E: C - Structures, typedef

0-dog.h: Defines a new structure type called dog with three elements: pointer char (name and onwer) that can store string
and float age which stores decimal numbers.

1-init-dog.c: Function takes a pointer to a struct dog variable d, as well as values for its name, age, and owner elements.
It then initializes the elements of the d variable with the given values.

2-print-dog.c: Function takes a pointer to a struct dog variable d, and prints its elements in a formatted way.
If an element is NULL, it prints (nil) instead of the element's value and  NULL, if it does nothing.

4-new-dog.c: This function create a new dog with values for name, age, and owner elements as dog_t variables.
It allocates memory for the new dog and its strings, and copies the values of name and owner to the allocated memory. 
If any of the memory allocations fail, it returns NULL.
