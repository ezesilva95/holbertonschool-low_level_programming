#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int val;

	for (val = '0'; val <= '9'; val++)
	{
		putchar(val);
	}
	for (val = 'a'; val <= 'f'; val++)
	{
		putchar(val);
	}
	putchar('\n');
	return (0);
}
