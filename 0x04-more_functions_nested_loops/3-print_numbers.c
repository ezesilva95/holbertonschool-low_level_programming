#include "main.h"
/**
 *print_numbers - prints numbers form zero to nine
 *Return: 0
 */
void print_numbers(void)
{
	char a;

	a = '0';

	for (a = '0'; a <= '9'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
