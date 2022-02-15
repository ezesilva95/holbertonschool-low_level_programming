#include "main.h"
/**
 *_strcat - function that ammends two strings
 *@dest: first string
 *@src: second string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\n';
	return (dest);
}
