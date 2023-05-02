#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
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
		curr->next = prev;
		next = curr->next;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return *head;
}
