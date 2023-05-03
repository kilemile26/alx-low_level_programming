#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data in a list
 * @head: pointer to first node in the linked list
 * Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (*head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		head += head->next;
	}
	if (head->next == NULL)
	{
		sum = head->next;
	}

	return (sum);
}
