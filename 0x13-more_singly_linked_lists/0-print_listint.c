#include "lists.h"
/**
 *print_listint - function that prints all elements of listint_t
 *@h: pointer to list
 *Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
