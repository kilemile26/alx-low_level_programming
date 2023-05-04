#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;
	
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
