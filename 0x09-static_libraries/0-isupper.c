#include "main.h"
/**
 *_isupper - checks if c is uppercase
 *@c: uppercase character
 *Return: 1 if it is lowercase charc. and 0 if it is uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
