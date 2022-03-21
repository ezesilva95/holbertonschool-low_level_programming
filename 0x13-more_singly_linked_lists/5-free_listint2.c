#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: point to the list .
 **/

void free_listint2(listint_t **head)
{
	listint_t *next_nd;
	listint_t *actual_node;

	if (head)
	{
		actual_node = *head;
		next_nd = (*head)->next;

		while (next_nd)
		{
			free(actual_node);
			actual_node = next_nd;
			next_nd = next_nd->next;
		}
		free(actual_node);
		*head = NULL;
	}
}
