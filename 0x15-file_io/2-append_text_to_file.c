#include "main.h"

/**
 * create_file - function that appends text at the end of a file
 * @filename: pointer to the name of file to be appended
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes, text_size;
	int len = strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	written_bytes = write(fd, text_content, len);
	text_size = written_bytes * sizeof(char);
	
	if (text_size != len)
		close(fd);
	return (-1);

	if (!fd || !text_size)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
