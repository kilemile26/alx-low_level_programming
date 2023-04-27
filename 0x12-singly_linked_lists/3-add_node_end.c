#include "lists.h"

/**
 * *add_node_end - pointer to a pointer to the first node in the linked list
 * @head: pointer to the new node of the list
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t len = 0;
	list_t *this = *head;

	if (str == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (this->next != NULL)
		{
			this = this->next;
		}
		this->next = new_node;
	}
		len = strlen(new_node->str);
		new_node->len = len;
		return (new_node);
}
