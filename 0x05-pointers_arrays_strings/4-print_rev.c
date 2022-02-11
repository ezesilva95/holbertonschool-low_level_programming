#include "main.h"
/**
 *print_rev - print string in reverse
 *@s: asd
 */
void print_rev(char *s)
{
	int Rlen = 0, i;

	i = 0;

	while (s[i++])
		Rlen++;

	for (i = Rlen; i >= 0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
