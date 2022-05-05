#include "lists.h"
/**
 *add_dnodeint_end - func that adds a new node at the end of a dlistint_t list
 *@head: pointer to head of list
 *@n: node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	new_node->next = NULL;
	new_node->prev = end;
	end->next = new_node;

	return (new_node);
}
