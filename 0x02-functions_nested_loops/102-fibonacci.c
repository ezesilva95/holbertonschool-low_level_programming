#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	unsigned long sum, a, b, c;

	a = 0;
	b = 1;

	for (sum = 0; sum < 50; sum++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
	if (sum == 49)
	{
		putchar('\n');
	}
	else
	{
		printf(", ");
	}
	}
	return (0);
}
