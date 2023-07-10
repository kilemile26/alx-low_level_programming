#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number or 0 if b is NULL,
 * or if there is any char which is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else if (*b != '0')
		{
			return (0);
		}
		else
		{
			result <<= 1;
		}
		b++;
	}
	return (result);
}
