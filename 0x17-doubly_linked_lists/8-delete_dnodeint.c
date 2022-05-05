#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head;

	if (head == NULL || *haed == NULL)
	{
		return (-1);
	}
	delete = *haed;

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (delete->next != NULL))
	{
		index -= 1;
		delete = delete->next;
	}
	if (index == 0)
	{
		delete->prev->next = delete->next;
		if (delete->next != NULL)
			delete->next->prev = delete->prev;
		free(delete);
		return (1);
	}

	return (-1);
}
