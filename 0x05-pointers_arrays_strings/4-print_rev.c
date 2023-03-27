#include "main.h"

/**
 * print_rev - function for printing string in reverse
 * @s: function parameter
 * Return:0
 */

void print_rev(char *s)
{
	int i;

	for (i = 50; s[i] != '\0'; i--)
		_putchar(s[i]);
}
