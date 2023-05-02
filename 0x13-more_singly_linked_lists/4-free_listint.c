#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of list to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
