/**
 * _strlen_recursion - prints the length of string recursively
 * @s: param pointer to the string to be printed
 *
 * Return: none if success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return (0);
	}

	return (1 + _strlen_recursion(s + 1)); /* recursive call */

}
