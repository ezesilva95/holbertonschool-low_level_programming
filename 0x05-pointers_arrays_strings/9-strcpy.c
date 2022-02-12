#include "main.h"
/**
 *_strcpy - Write a function that copies the string pointed to by src
 *@src: src
 *@dest: dest
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int copy = 0;

	while (src[copy])
	{
		dest[copy] = src[copy];
		copy++;
	}
	return (dest);
	_putchar('\n');
}
