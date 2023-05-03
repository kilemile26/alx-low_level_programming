#include "function_pointers.h
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 or 98 on arg count error or 99 on op error || 100 on div error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		puts("Error");
		return (99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		puts("Error");
		return (100);
	}

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}
