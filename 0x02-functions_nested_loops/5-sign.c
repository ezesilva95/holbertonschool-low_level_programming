#include "main.h"
/**
 *print_sign - print sign of number
 *@n: number
 * Return: 1 if is possitve, -1 if it is negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
