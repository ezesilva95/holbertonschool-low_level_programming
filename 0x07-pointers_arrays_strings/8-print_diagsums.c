#include <stdio.h>
#include "main.h"
/**
 *print_diagsums -sum  two diagonals of a square matrix of integers
 *@a: array
 *@size: size
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 += a[(size + 1) * n];
		sum2 += a[(size - 1) * (n + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
