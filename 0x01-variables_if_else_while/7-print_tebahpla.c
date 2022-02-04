#include<stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int lowC;

	for (lowC = 'z'; lowC >= 'a'; lowC--)
	{
		putchar(lowC);
	}
	putchar('\n');
	return (0);
}
