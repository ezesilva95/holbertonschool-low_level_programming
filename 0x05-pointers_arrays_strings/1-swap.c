#include "main.h"
/**
 *swap_int - function that swaps the value of two integers
 *@a: number
 *@b: number
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
