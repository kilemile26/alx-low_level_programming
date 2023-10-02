#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current, *prev;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    current = ht->shead;
    prev = NULL;

    while (current != NULL && strcmp(current->key, key) < 0)
    {
        prev = current;
        current = current->snext;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    new_node->sprev = prev;
    new_node->snext = current;

    if (prev == NULL)
        ht->shead = new_node;
    else
        prev->snext = new_node;

    if (current == NULL)
        ht->stail = new_node;
    else
        current->sprev = new_node;

    return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
