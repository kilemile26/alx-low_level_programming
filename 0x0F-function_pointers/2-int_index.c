#include "function_pointers.h"

/**
 * int_index - function that searches for an integer return index if true
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	while (i < size && !cmp(array[i]))
	{
		i++;
	}

	return (i == size ? -1 : i);
}
