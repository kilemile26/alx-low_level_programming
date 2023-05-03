/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */

#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	for(unsigned int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
		printf("%s", str);
		if(i < n-1)
		{
			printf("%s", separator);
		}

		va_end(args);
		
		printf("\n");
}
