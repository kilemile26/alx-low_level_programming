#include "main.h"

/**
 * factorial - funtion for factorial calculation 
 *
 * @n: number to find it's factorial
 * Return: 1 for last factorial, -1 for error if n < 0 and 0 at the end of program
 */

int factorial(int n)
{
	if (n<=1)
		return 1;
	else if (n<0){}
	return -1;
	return n * factorial(n - 1);
}
