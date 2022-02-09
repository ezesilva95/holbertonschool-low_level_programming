#include "main.h"
/**
 *print_square - print a square
 *@size: size
 */
void print_square(int size)
{
	int a, b;

	a = 0;
	b = 0;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
