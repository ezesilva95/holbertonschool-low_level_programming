#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	long int n;
	long int div;
	long int maxFactor;

	n = 612852475143;
	div = 2;

	while (n != 1)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFactor = n;
			n = n / div;
		}
		if (n == 1)
		{
			printf("%ld is the largest prim factor'\n'", maxFactor);
		}
	}
	return (0);
}

