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
	int fop, bytes_written;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fop = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fop == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fop, text_content, len);

		if (bytes_written == -1)
		{
			close(fop);
			return (-1);
		}
	}

		close(fop);
		return (1);
}


/**
 * _strlen - counts and return the length of a given string
 * @str: the string to be counted
 *
 * Return: length of string or 0 if NULL
 */

int _strlen(char *str)
{
	int i, strLen = 0;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i) != '\0'; i++)
		strLen++;

	return (strLen);
}

