#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to a string containing the binary number
 * Return: the converted number
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
