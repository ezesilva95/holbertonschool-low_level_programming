#include "main.h"
/**
 *_strncpy - asgas
 *@dest: one string
 *@src: second string
 *@n: ansaf
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while(a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
