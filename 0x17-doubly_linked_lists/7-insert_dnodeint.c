#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to list.
 * @idx: position to add node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}

	while (aux_node != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = aux_node->next;
			aux_node->next = new_node;
			return (new_node);
		}
		aux_node = aux_node->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
