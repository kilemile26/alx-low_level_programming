#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

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
	listint_t this_node;

	if (head == NULL)
	{
		return (NULL);
	}

	if (end_node == NULL)
	{
		*head == end_node;
	}

	while (this_node->next == NULL)
	{
		this_node->next = end_node;
	}

	return (new_node);
}
