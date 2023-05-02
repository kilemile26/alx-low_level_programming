#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the head of the linked list
 * Return: the data inside the head or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return 0;
	}
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return data;
}
