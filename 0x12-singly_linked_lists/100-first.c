#include "lists.h"

void before_main() __attribute__ ((constructor));
/**
 * void - prints a sentence before the main
 */

void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
