#include "main.h"

/**
 * argstostr - joins all the arguments of the program
 *
 * @ac: grid to free the previous
 * @av: height of grid
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;

	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}

	n++;
	str = malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);

}
