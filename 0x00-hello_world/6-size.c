#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */

int main(void)

{
	print("size of char: %d byte(s)\n", sizeof(char));
	print("size of int: %d byte(s)\n", sizeof(int));
	print("size of long int: %d byte(s)\n", sizeof(long int));
	print("size of long long int: %d byte(s)\n", sizeof(long long int));
	print("size of float: %d byte(s)", sizeof(float));
	return (0);
}
