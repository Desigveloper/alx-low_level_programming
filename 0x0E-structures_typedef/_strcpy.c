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
	int len, j;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		;
	}

	for (j = 0; j < len; j++)
	{
		*(d + j) = *(s + j);
	}

	*(d + j) = '\0';

	return (d);
}
