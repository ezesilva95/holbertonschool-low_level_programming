#include "main.h"
/**
 *_puts - wrote a function that prints a string
 *@str: string
 */
void _puts(char *str)
{
	int len;

	len = 0;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
