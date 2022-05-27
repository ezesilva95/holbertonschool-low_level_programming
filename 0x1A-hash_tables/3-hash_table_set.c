#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: the hash table you want to add or update the key/value to
 *@key: key
 *@value: the value associated with the key
 *Return: 1 if Succes, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL, *new_element = NULL;
	unsigned long int i_num = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i_num = key_index((unsigned char *) key, ht->size);
	element = ht->array[i_num];

	if (element && strcmp(key, element->key) == 0)
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->next = ht->array[i_num];
	new_element->value = strdup(value);
	ht->array[i_num] = new_element;

	return (1);

}
