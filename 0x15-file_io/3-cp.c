/**
 * main - entry point to promgram
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 on Success
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3) /* Check for correct number of arguments */
	{
		print_usage();
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY); /* Open file_from for reading */
	if (fd_from == -1) /* Handle reading error*/
	{
		err_msg = print_err_msg(argv[1], err_98);
		exit(98);
	}

	/* Open file_to for reading, truncate if file exists else create it */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1) /* Handle reading error */
	{
		err_msg = print_err_msg(argv[2], err_99);
		close(file_from);
		exit(99);
	}

	/* Copy contents of file1 to file2 using a buffer size of 1024 bytes */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			print_err_msg(argv[2], err_99);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	/* Handle read error */
	if (bytes_read == -1)
	{
		print_err_msg(argv[1], err_98);
		close(fd_from);
		close(fd_to);
		exit(98)
	}
	/* Close file descriptors and handle errors */
	if (close(fd_from) == -1)
	{
		print_err_msg(NULL, err_100);
		close(fd_to);
		return (100);
	}
	if(close(fd_to) == -1)
	{
		print_err_msg(NULL, err_100);
		return (100);
	}

	return (0);
}

/**
 * print_err_msg - Template for the varius error messages
 * @filename: param, Pointer to name file to which error occured
 * @err_code: param, Error code
 * Return: message printed
 */

void print_err_msg(char *filename, int err_code)
{
	int err_98 = 98;
	int err_99 = 99;
	int err_100 = 100;

	switch (err_code)
	{
		case err_98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					filename);
			break;
		case err_99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					filename);
			break;
		case err_100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
					errno);
			break;
		default:
			break;
	}
}

/**
 * print_usage - Prints the usage of the program
 * Return: void
 */

void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
