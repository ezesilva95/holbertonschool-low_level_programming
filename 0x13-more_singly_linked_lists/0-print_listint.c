#include "lists.h"
/**
 *print_listint - function that prints all elements of listint_t
 *@h: pointer to list
 *Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
