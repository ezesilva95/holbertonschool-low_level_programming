#include "lists.h"
/**
 *print_list - function that prints all elements of list_t
 *@h: pointer to list
 *Return: number of nods
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
