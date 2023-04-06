#include "main.h"

/**
 *  _pow_recursion - power recursion function
 * @x: this value is raised to the power of y
 * @y: for raising the power of x
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
