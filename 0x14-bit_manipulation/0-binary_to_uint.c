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
	int i = 0;

	if (!b)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '0')
		{
			result <<= 1;
		}
		else
		{
			return = (0);
		}
		i++;
	}
	return (result);
}
