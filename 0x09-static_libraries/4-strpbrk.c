#include "main.h"
/**
 *_strpbrk - function tat searches a string for any of a set of bytes
 *@s: string
 *@accept: string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
