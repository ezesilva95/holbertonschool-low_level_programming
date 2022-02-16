#include "main.h"
/**
*reverse_array - reverse content of an array
*@a: p
*@n: n
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, b;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (b	= 0; b < i / 2; b++)
	{
		aux = a[b];
		a[b] = *p;
		*p = aux;
		p--;
	}
}
