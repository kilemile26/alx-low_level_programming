#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data in a list
 * @head: pointer to first node in the linked list
 * Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	wile (head != NULL)
	{
		sum += head->n;
		head->next == NULL
	}

	return (sum);
}
