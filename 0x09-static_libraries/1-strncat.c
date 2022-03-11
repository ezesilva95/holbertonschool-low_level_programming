#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: string one
 *@src: string two
 *Return: dest
 *@n: asda
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
