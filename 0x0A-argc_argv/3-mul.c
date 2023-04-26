#include "main.h"

/**
 * main - printing names of the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * @u: argument 1
 * @i: argument 2
 * @result: answer to mul
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;
	int result;
	int arg1;
	int arg2;

	for (i = 0; i < argc; i++)
	{
		if (argc != 3)
		{
			printf("Error");
			return (1);
		}
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;
	printf("%d\n", result);
	return (0);
}
