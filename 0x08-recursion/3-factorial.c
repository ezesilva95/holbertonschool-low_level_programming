#include "main.h"
/**
 *factorial - function that returns the factioral of a given number
 *@n: number
 *Return: nothing
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
