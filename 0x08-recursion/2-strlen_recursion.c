#include "main.h"

/**
 * _strlen_recursion - string counting function
 * @s: pointer pointing to string char
 * Return: Always 0 if count finishes.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
