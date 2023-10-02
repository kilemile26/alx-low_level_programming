#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if
 * key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	/* Traverse the linked list at the calculated index */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key found, return the associated value */
			return (current->value);
		}
		current = current->next;
	}

	/* Key not found, return NULL */
	return (NULL);
}
