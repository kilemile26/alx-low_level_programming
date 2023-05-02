#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		return *head;
	}

	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return *head;
}
