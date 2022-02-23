#include "main.h"
/**
 *_sqrt_recursion - function that retunrs the natural square root of a number
 *@n: number
 *Return: nothing
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}


/**
 *sqroot - calculate square root
 *@n: number to calculate the square root
 *@a: number
 *Return: nothing
 */
int sqroot(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (a);
	}
	return (sqroot(n, a + 1));
}
