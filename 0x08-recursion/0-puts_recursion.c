#include "main.h"

/**
 * main - check the code
 * @s: a pointer used to point 
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
