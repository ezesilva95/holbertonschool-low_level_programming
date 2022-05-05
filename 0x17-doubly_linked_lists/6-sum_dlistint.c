#include "lists.h"
/**
 *sum_dlistint - func returns sum of all the data(n) of dlistint_t linked list
 *@head: pointer to the list
 *Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
