#include "main.h"
/**
 *print_alphabet_x10 - entry
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alph, cant;

	cant = 0;

	while (cant < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		cant++;
		_putchar('\n');
	}
}
