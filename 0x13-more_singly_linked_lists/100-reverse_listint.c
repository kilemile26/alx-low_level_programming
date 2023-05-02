#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return prev;
}

