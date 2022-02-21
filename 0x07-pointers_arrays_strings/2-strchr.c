#include "main.h"
/**
 * _strchr - Function that locates a character un a string
 * @s: srtring in where we search a character
 * @c: character
 * Return: character c or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
