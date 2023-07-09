/**
 * strspn - Calculates the length of the prefix substring of s.
 *
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s,
 * 	which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *p_accept;

	while (*s != '\0')
	{
		found = 0;

		for (p_accept = accept; *p_accept != '\0'; p_accept++)
		{
			if (*s == *p_accept)
			{
				found = 1;
				break;
			}
		}

		if (!found)
			return (count);

		count++;
		s++;
	}

	return (count);
}
