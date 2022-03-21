#include "lists.h"
/**
 *add_nodeint - function that adds a new node at the beinning of listint_t
 *@head: pointer to the head list
 *@n: int
 *Return: adress of the new element or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
