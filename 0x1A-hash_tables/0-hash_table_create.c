#include "hash_tables.h"

/**
 * hash_table_create - create hash tables
 * @size: size
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_tb;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hsh_tb = malloc(sizeof(hash_table_t));
	if (!hsh_tb)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hsh_tb);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	hsh_tb->size = size;
	hsh_tb->array = array;

	return (hsh_tb);
}
