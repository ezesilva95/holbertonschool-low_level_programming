#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of list_t list.
 * @head:- pointer to the head of the list.
 * @str: - string
 * Return: adress of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
	{
		return (NULL);
	}

	new_nd->str = strdup(str);

	new_nd->next = (*head);
	(*head) = new_nd;
	new_nd->len = strlen(str);

	return (new_nd);
}
