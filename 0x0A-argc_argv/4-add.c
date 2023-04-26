#include "main.h"

/**
 * main - Entry point for the program
 *
 * the function prints minimum number of coins required to make the change.
 * @argc: number of args
 * @argv: pointer to args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

    for (i = 1; i < argc; i++) {
        const char *arg = argv[i];
        int len = strlen(arg);

        for (int j = 0; j < len; j++) {
            if (!isdigit(arg[j])) {
                printf("Error\n");
                return 1;
            }
        }

        int num = atoi(arg);
        if (num > 0) {
            sum += num;
        }
    }

    printf("%d\n", sum);

    return (0);
}
