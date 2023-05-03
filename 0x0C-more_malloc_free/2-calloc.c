#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return NULL;
	}

	memset(ptr, 0, nmemb * size);

	return ptr;
}
