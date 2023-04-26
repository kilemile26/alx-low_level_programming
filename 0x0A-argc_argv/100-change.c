#include "main.h"

/*
 * main - Entry point for the program that prints minimum number of coins
 *
 * @argc: number of args
 * @argv: pointer to args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, amount, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (i = 0; i < 5 && amount > 0; i++)
	{
		num_coins += amount / coins[i];
		amount %= coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}
