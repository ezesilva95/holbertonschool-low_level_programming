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
	dlistint_t *aux_node;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	aux_node = *h;
	while ((idx != 0) && (aux_node->next))
	{
		idx -= 1;
		aux_node = aux_node->next;
		if (idx == 0)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
