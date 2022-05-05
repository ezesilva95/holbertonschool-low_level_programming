#include "lists.h"
/**
 * inserr_node_idx - insert node at given index
 * @aux_node: ptr
 * @n: node data
 * Return: address of inserted node
 */
dlistint_t *insert_node_idx(dlistint_t *aux_node, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = aux_node;
	new_node->prev = aux_node->prev;
	aux_node->prev->next = new_node;
	aux_node->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	aux_node = *h;
	while ((idx != 0) && (aux_node->next))
	{
		idx -= 1;
		aux_node = aux_node->next;
		if (idx == 0)
			return (insert_node(aux_node, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
