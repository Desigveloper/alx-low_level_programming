Project 0x0C: C - More malloc, free

Task 0-malloc-checked.c: A function that allocates memory using malloc.
Returns a pointer to the allocated memory

Task 1-string-nconcat.c: A function that takes two strings s1 and s2, and an unsigned integer n as input.
Returns a pointer to a newly allocated space in memory, which contains s1, 
followed by the first n bytes of s2, and null terminated.
If the function fails to allocate memory, it returns NULL.

Task 2-calloc.c: A function that takes two unsigned integers nmemb and size as input.
Returns a pointer to the allocated memory for an array of nmemb elements of size bytes each.
The memory is set to zero, if either nmemb or size is 0, _calloc then returns NULL.

Task 3-array-range.c: A function that creates an array of integers containing all the values from min to max, inclusive.
Returns NULL if  min is greater than max, or memory allocation fails.
