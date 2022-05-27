#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *val = NULL, *aux = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		val = ht->array[i];
		while (val != NULL)
		{
			aux = val->next;
			if (val->key != NULL)
				free(val->key);
			if (val->value != NULL)
				free(val->value);

			free(val);
			val = aux;
		}
		i++;
	}
	free(ht->array);
	free(ht);
	free(val);
	free(aux);
}
