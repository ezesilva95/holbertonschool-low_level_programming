#include "main.h"
/**
*_strlen_recursion - function that returns the length of a string
 *@s: string
 *Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 *palindrome - function that find palindrome
 *@a: the string
 *@b: counter for the beggining
 *@c: counter for the ending
 *Return: ads
 */
int palindrome(char *a, int b, int c)
{
	if (b == c)
	{
		return (1);
	}
	if (a[b] != a[c])
	{
		return (0);
	}
	if (b < c + 1)
	{
		return (palindrome(a, b + 1, c - 1));
	}
	return (1);
}

/**
*is_palindrome - function that returns 1 if it is a palind.. or 0
*strlen_recursion - asas
*@s: pointer
*Return: nothing
*/
int is_palindrome(char *s)
{
	int count = _strlen_recursion(s);

	if (count == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, count - 1));
}
