#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head;
	unsigned int idx;

	if (!(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	idx = index -1;

	while (index != 0 && delete->next != NULL)
	{
		idx++;
		delete = delete->next;
	}

	if (index == 0)
	{
		delete->prev->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
