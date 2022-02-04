#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n ; m <= '9'; m++)
		{
		if (n != m)
		{
		putchar(n);
		putchar(m);
		if (n < '8')
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
