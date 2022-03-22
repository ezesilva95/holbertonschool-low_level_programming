#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to list.
 * @idx: position to add node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
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
