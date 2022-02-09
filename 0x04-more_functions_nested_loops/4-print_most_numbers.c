#include "main.h"
/**
 *print_most_numbers - print numbers with some exeption
 */
void print_most_numbers(void)
{
	char n;

	n = '0';
	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
