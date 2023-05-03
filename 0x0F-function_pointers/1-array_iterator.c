#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
