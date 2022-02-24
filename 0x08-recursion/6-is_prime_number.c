#include "main.h"
/**
 *primnumb - asda
 *@n: number
 *@i: numb
 *Return: nothing
 */
int primnumb(int n, int i)
{
	if (n < 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (primnumb(n, i + 1));
}
/**
 *primnumb - asda
*is_prime_number - return 1 or 0
*@n: number
*Return: nothing
*/
int is_prime_number(int n)
{
	return (primnumb(n, 1));
}
