#include "main.h"
/**
 *_islower - checks for lowercase characters
 *@c: letter
 *Return: 1 if c is lwc, 0 otherwise
 */
int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
}
