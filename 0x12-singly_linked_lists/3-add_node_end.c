#include "lists.h"
/**
 * add_node_end - functions that adds a new node ath the end of list_t list
 * @str: string to set in new node
 * @head: pointer to the head of element list
 * Return: adress of new_node or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *tmp_n_d;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
	}
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;
		{
			tmp_n_d->next = n_node;
		}
	}
	return (n_node);
}
