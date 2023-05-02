#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the first node of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		listint_t *this_node = *head;

		while (this_node->next != NULL)
		{
			this_node = this_node->next;
		}

		this_node->next = end_node;
	}

	return (end_node);
}
