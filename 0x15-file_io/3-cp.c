/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments passed to the program.
 *
 * Return: 0 on success, or an error code on failure.
 */

#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_usage_err(argv[0]);
		return (97);
	}

	return (copy_content(argv[1], argv[2]));
}

/**
 * print_usage_err - Prints an error message for incorrect usage of the program
 * @program_name: Pointer to the program name
 * Return: void
 */

void print_usage_err(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

/**
 * print_read_err - Prints an error message for a read error
 * @filename: Pointer to the name of file that couldn't be read
 * Return: void
 */

void print_read_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from this file%s\n", filename);
}

/**
 * print_write_err - Prints error message for a written error
 * @filename: Pointer to the name of file that couldn't be written to
 * Return: void
 */

void print_write_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to this file%s\n", filename);
}
/**
 * print_close_err - Prints an error message for a close error
 * @fd_value: File descriptor value that couldn't be closed
 * Return: void
 */

void print_close_err(int fd_value)
{
	dprintf(STDERR_FILENO, "Error: Cant close this file %d\n", fd_value);
}

/**
 * copy_content - Copies the content of one file to another
 * @file_from: Pointer to the name of the source file
 * @dest_file: Pointer to the name ofthe destination file
 * Return: 0 on success , otherwise error code
 */

int copy_content(char *file_from, char *dest_file)
{
	int fd_from, fd_dest, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_read_err(file_from);
		return (98);
	}
	fd_dest = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd_dest == -1)
	{
		print_write_err(dest_file);
		close(fd_from);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_write_err(dest_file);
			close(fd_from);
			close(fd_dest);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		print_read_err(file_from);
		close(fd_from);
		close(fd_dest);
		return (98);
	}
	if (close(fd_from) == -1)
	{
		print_close_err(fd_from);
		return(100);
	}
	if (close(fd_dest) == 1)
	{
		print_close_err(fd_dest);
		return (100);
	}
	return (0);
}	
