#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the first node of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *end_node;

    if (head == NULL)
        return (NULL);

    end_node = malloc(sizeof(listint_t));
    if (end_node == NULL)
        return (NULL);

    end_node->n = n;
    end_node->next = *head;
    *head = end_node;

    return (new_node);
}
