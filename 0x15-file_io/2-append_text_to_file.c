#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of file to be appended
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes;
	int text_size = 0;
	int len = strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	written_bytes = write(fd, text_content, len);
	if (written_bytes < 0)
	{
		close(fd);
		return (-1);
	}

	/*text_size = written_bytes * sizeof(char);
	if (text_size != len)
	{
		close(fd);
		return (-1);
	}*/

	close(fd);
	return (1);
}
