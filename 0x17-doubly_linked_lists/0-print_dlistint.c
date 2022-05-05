#include "lists.h"
/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: pointer to a list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n)
			printf("%u\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
