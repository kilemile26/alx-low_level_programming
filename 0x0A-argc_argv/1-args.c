#include <stdio.h>

/**
 * main - argument function
 * @argc: integer variable argument
 * @argv: character pointers array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*ignore argv since it is not needed.*/
	(void) argv;
	printf("%d", argc - 1);

	return (0);
}
