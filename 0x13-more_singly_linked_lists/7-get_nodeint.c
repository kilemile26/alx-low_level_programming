#include "lists.h"

/**
 * get_nodeint_at_index - function that finds node at nth index in linked list
 * @head: pointer to first node in the linked list
 * @index: index of the node to return starting at zero
 * Return: nth node of list or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (head != NULL)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
