#include "lists.h"
/**
 *free_dlistint - frees a list_t list.
 *@head: point to the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
	free(head);
}
