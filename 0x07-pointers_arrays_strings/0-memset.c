#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: string 1
 * @b: char
 * @n: int
 * Return: s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
