#include "main.h"

/**
 *_islower - shows if the character is lower case
 *@c: parameter to be printed
 *Return: 1 if it is lower case and 0 otherwise
 */

int _islower(int c);
{
	if ((c <= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
