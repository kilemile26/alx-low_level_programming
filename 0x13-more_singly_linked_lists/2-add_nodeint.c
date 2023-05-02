#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @head: pointer to pointer of head of list
 * @n: value to store in new node
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	
	}
	
	if (head == NULL)
	{
		return (NULL);
	}

	new_n-> = n;
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
