#include "lists.h"

void before_main(void) __attribute__ ((constructor));
/**
 * befor_main - prints a sentence before the main
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
