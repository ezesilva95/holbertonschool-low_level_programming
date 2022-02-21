#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: string
 *@accept: string
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, i = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != ' ')
		{
			if (accept[a] == s[b])
			{
				i++;
			}
			b++;
		}
	a++;
	}
	return (i);
}
