#include "main.h"

/**
 * set_bit - function that sets value of bit to 1
 * @n: pointer to the number to be set
 * @index: index of the bit to be set
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
