#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - returns sum of a and b
 *@a: a
 *@b: b
 *Return: ..
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - return substracion of a and b
 *@a: a
 *@b: b
 *Return: ..
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - return product of a and b
 *@a: a
 *@b: b
 *Return: ..
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - return result of division of a by b
 *@a: a
 *@b: b
 *Return: ..
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - return the remainder of division of a by b
 *@a: a
 *@b: b
 *Return: ..
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
