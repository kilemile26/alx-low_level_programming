#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table's array
 * @key: The key to be hashed
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/*
	 * Calculate the index by taking the modulus of the hash value with
	 * the array size
	 */
	return (hash_value % size);
}
