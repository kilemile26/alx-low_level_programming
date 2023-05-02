#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head of list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
}

