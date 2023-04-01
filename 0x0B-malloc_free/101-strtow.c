#include "main.h"
/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, j, k, l, n1 = 0, qa = 0;
	char **q;

	if (str == NULL || *str == '\0')
		return (NULL);
	n1 = words_count(str);
	if (n1 == 1)
		return (NULL);

	q = (char **)malloc(n1 * sizeof(char *));
	if (q == NULL)
		return (NULL);
	q[n1 - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
				j++;
			q[qa] = (char *)malloc(j * sizeof(char));
			j--;
			if (q[qa] == NULL)
			{
				for (k = 0; k < qa; k++)
					free(q[k]);
				free(q[n1 - 1]);
					free(q);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				q[qa][l] = str[i + l];
			q[qa][l] = '\0';
				qa++;
				i += j;
		}
		else
			i++;
	}
	return (q);
}

/**
 * words_count - counts the number of words in a string
 * @str: string to count
 *
 * Return: int of number of words
 */

int words_count(char *str)
{
	int i = 0, n2 = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				n2++;
		}
		else if (i == 0)
			n2++;

		i++;
	}

	n2++;
	return (n2);
}
