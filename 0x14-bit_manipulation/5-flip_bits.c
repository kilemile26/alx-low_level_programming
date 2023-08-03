#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
