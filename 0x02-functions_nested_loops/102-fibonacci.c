#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int sum, a, b, c;

	a = 0;
	b = 1;

	for (sum = 0; sum <= 50; sum++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
	if (sum == 50)
	{
		putchar('\n');
	}
	else
	{
		putchar(',');
	}
	}
	return (0);
}
