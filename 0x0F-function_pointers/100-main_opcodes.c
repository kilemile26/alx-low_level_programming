#include "function_pointers.h"

/**
 * main - prints its own function's opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *main_func;
	int num_bytes;
	int i;

	if (argc != 2 || atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (argc != 2 ? 1 : 2);
	}

	main_func = (char *)main;
	num_bytes = atoi(argv[1]);

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx%c", main_func[i], i == num_bytes - 1 ? '\n' : ' ');
	}

	return (0);
}
