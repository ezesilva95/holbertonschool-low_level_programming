#include "main.h"
/**
 *more_numbers - prints ten times the numbers 0 to 14
 */
void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
