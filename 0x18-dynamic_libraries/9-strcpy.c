/**
 * *_strcpy - copies the string pointed to one pointer to other
 * @dest: destination param
 * @src: source param
 * Return: copied value in dest
 */

#include "main.h"

char *_strcpy(char *dest, char *src) {
	int i;

	for (i = 0; src[i] != '\0'; i++) {
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}
