#include "main.h"

/**
 * main - printing the argument name only
 * @argc: integer variables
 * @argv: array of pointers to arguments
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
