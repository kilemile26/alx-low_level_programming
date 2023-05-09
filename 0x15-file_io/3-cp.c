#include "main.h"

#define BUF_SIZE 1024

/**
 * main - program that copies the content of a file to another file
 * @rgc: The number of arguments
 * @argv: argument strings
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (nread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) < 0 || close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1) ? fd_from : fd_to);
		exit(100);
	}

	return 0;
}
