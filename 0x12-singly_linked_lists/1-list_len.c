#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
