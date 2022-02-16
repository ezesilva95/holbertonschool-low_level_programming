#include "main.h"
/**
 *leet - function that encodes a string into 1337
 *@s: puntero
 *Return: s
 */
char *leet(char *s)
{
	int a, b;
	int lett[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	a = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (s[a] == lett[b])
			{
				s[a] = num[b];

			}
		}
	}
	return (s);
}
