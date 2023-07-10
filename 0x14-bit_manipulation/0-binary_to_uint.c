#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number or 0 if b is NULL, 
 * or if there is any char which is not 0 or 1
 */

unsigned int binary_to_uint(const char * const b)
{
	size_t i;
	unsigned int dec_val = 0;

	if (!b)
	{
		return 0;
	}

	for (size_t i = 0; b[i]; ++i)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return 0;
		}

		dec_val = (dec_val << 1) | (b[i] - '0');
	}

	return dec_val;
}
