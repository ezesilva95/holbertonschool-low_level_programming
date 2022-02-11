#include "main.h"
/**
 *print_rev - print string in reverse
 *@s: asd
 */
void print_rev(char *s)
{
	int Rlen = 0, i;

	while (s[i++])
		Rlen++;

	for (i = Rlen - 1; i >= 0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
