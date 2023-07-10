#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: bit number to be searched
 * @index: index of the bit
 * Return: value of the bit or -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int bitmask = 1 << index;
	return (n & bitmask) ? 1 : 0;
	/*return ((n >> index) & 1);*/
}
