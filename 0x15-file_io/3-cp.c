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
	char buffer[BUFFER_SIZE], *err_msg;
	ssize_t bytes_read;

	if (argc != 3) /* Check for correct number of arguments */
	{
		print_err_msg("Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY); /* Open file_from & handle errors */
	if (fd_from == -1)
	{
		err_msg = print_err_msg("Error: Can't read from file");
		dprintf(STDERR_FILENO, "%s %s\n", err_msg,  argv[1]);
		exit(98);
	}

	/* Open file_to and handle errors */
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0666);
	if (fd_to == -1)
	{
		err_msg = print_err_msg("Error: Can't write to file");
		dprintf(STDERR_FILENO, "%s %s\n", err_msg, argv[2]);
		exit(99);
	}

	/* Copy contents of file_from to file_to */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			print_err_msg("Error: Can't write to file");
			
			exit(99);
		}
	}
	/* Handle read error */
	if (bytes_read == -1)
	{
		print_err_msg("Error: Can't read from file");
		exit(98)
	}
	/* Close file descriptors and handle errors */
	close_fd(fd_from, fd_to, err_msg);

	return (0);
}

/**
 * print_err_msg - Template for the varius error messages
 * @msg: param, Pointer to error message to be printed
 * Return: message printed
 */

char *print_err_msg(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	return (msg);
}

/**
 * close_fd - Closes file descriptors and handle errors
 * @fd_from: Descriptor of source file
 * @fd_to: Descriptor of receiving file
 * @err_msg: Pointer to error msg
 * Return: void
 */

void close_fd(int fd_from,  int fd_to, char *err_msg)
{
	int close_status;

	close_status = close(fd_from_);
	if (close_status == -1)
	{
		err_msg = print_err_msg("Error: Can't close fd");
		dprintf(STDERR_FILENO, "%s %d\n", err_msg, fd_from);
		exit(100);
	}

	close_status = close(fd_to);
	if (close_status == -1)
	{
		err_msg = print_err_msg("Error: Can't close fd");
		dprintf(STDERR_FILENO, "%s %d\n", err_msg, fd_to);
		exit(100);
	}
}
