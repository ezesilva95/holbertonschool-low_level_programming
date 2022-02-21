#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where bytes will be copied
 * @src: memory area from where bytes will be copied
 * @n: number of bytes
 * Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
