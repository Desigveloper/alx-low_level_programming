/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure. If filename is NULL, return -1.
 */

#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (filename == NULL)
		return (-1);

	fd = fopen(filename, "a");

	if (fd == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fd, "%s", text_content);

	fclose(fd);

	return (1);
}
