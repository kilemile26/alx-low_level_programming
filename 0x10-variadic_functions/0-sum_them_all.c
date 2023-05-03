/**
 * sum_them_all - a function that Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A symbol shows that number of paramters can be taken by this function
 * Return: 0 if n == 0 or the sum of all parameters.
 */

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return 0;
	}

	va_start(args, n);

	for (i = 0; i < n; i++) 
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;
}
