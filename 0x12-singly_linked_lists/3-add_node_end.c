#include "lists.h"

/**
 * *add_node - pointer to a pointer to the first node in the linked list
 * @head: pointer to the new node of the list
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t len = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return(NULL);
	}
	
	new_node->next = NULL;

	if (*head == NULL) 
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	new_node->len = len;
	return (new_node);
}
