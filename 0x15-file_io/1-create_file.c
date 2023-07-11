/**
 * create_file - Creates a file with the given name and content,
 * or an empty file if content is NULL.
 *
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file, or NULL to create file.
 *
 * Return: 1 on success, -1 on failure.
 */

#include "main.h"

int create_file(const char *filename, char *text_content)
{
	unsigned int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

		close(fd);
		return (1);
}
