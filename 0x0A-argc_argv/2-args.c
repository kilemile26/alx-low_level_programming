#include "main.h"

/**
 * main - printing names of the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
