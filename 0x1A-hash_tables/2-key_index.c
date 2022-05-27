#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size of hash table
 * Return: index where key/value pair is stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);

	index = hash_djb2(key);
	return (index % size);
}
