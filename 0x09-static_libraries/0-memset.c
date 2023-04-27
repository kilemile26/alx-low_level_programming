#include "main.h"

/**
 * _memset - afunction that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte to be used
 * @n: number of bytes to be printed
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	
		return (s);
}
