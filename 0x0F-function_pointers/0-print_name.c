#include "function_pointers.h"

/**
 * print_name - print name using pointer to function
 * @name: string to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
