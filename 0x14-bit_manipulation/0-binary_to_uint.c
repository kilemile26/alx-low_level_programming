#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to a string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result += pow(2, len - i - 1);
		}
	}
	return result;
}
