#include "lists.h"

/**
 * *add_node - prints all the elements of a list_t list
 * @head: pointer to the new node of the list
 * @str: pointer to the newly allocated string
 * Return: the number of element in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *new_node = malloc(sizeof(list_t));
	while (str[len])
	{
		len++;
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = len;
	*head = new_node;

	return (new_node);
}
