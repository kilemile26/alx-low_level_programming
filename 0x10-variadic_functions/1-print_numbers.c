#include "variadic_functions.h"

/**
 * print_numbers - function that Prints numbers
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list args;
	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
		va_end(args);

		printf("\n");
}
