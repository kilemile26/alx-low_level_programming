#include "main.h"

/**
 * read_textfile - function that reads text file & prints it to standard output
 * @filename: file to be read and printed
 * @letters: number of letters to be read and printed
 * Return: actual number of letters read and printed or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
	{
		return (0);
	}

	return (bytes_read);
}
