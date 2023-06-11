/**
 * main - the entry point. adds all positive numbers provided as argumentg
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 (success) or 1 if an error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j); j++)
		{
			if (!isdigit(*(*(argv + i) + j)))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(*(argv + i));
	}

	printf("%d\n", sum);
	return (0);
}
