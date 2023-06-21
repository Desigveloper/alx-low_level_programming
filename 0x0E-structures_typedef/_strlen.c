/**
 * _strlen - returns length of string
 * @str: the string to evaluate
 *
 * Return: length od string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		;
	}

	return (i);
}
