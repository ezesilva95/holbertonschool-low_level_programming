#include "main.h"
/**
 *print_last_digit - last digit
 *@n: numero
 * Return: 0
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = (n % 10);

	if (lastd < 0)
	{
		lastd = (-1 * lastd);
	}
	_putchar(lastd + '0');
	return (lastd);
}
