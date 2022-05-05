#include "lists.h"
/**
 *get_dnodeint_at_index -func return the nth node of dlistint_t linked list.
 *@head: pointer to the list.
 *@index: nth node.
 *Return: if the node does not exist, return NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
