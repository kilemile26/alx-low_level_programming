#include "main.h"

/**
 * *create_array - function that creates array of char
 * @c: specific characte to initialize an array.
 * @size: the size of the memory to print
 *
 * Return: NULL if size=0 and pointer/NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
