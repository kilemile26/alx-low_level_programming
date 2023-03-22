#include "main.h"

/**
* _abs - check the absolute value of integer.
*
* @i: input integer
*
* Return: Always 0.
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
