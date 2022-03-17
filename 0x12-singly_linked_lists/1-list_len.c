#include "list.h"
/**
 *list_len - functions that returns number of elements in a linked list_t list
 *@h: pointer to list
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
