#include "main.h"

/**
 * main - printing names of the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int result, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;
	printf("%d\n", result);
	return (0);
}
