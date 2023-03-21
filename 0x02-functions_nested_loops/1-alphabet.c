#include "main.h"

/**
 *print_alphabet - function that prints alphabet in lower case from a-z
 *
 *Return: always (0);
 */



void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
