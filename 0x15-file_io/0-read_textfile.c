/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */

#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	char *buff = NULL;

	FILE *fd = NULL;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");

	if (fd == NULL)
		return(0);

	buff = malloc((letters + 1) * sizeof(char));

	if (buff == NULL)
		return (0);

	bytes_read = fread(buff, sizeof(char), letters, fd);

	if (bytes_read == -1)
		return (0);

	*(buff + bytes_read) = '\0';

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	fclose(fd);
	free(buff);

	return (bytes_written);
}
