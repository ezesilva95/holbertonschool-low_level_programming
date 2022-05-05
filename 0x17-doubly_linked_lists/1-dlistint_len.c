#include "lists.h"
/**
 *dlistint_len - func. that retur num of elements in a linked dlistint_t list
 *@h: pointer to a list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
