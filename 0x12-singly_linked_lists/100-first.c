#include "lists.h"

/**
 * before_main - prints a sentence before the main
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
