#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaping values
 * @a: v1
 * @b: v2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
