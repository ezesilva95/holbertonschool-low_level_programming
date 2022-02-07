#include "main.h"
/**
 * _isalpha - check if c is a lowercase or uppercase letter
 *@c: letter
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

