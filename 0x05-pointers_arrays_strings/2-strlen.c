#include "main.h"
/**
 *_strlen - function that returns the length of a string
 *@s: string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

