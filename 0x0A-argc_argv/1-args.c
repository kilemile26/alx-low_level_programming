#include <stdio.h>

/**
 * main - argument function
 * @argc: integer variable argument
 * @argv: character pointers array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
