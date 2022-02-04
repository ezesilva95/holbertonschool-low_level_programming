#include<stdio.h>
/**
*main - entry
*Return: 0
*/
int main(void)
{
	char lowC, e, q;

	e = 'e';

	q = 'q';

	for (lowC = 'a'; lowC <= 'z'; lowC++)
	{
		if (lowC != e && lowC != q)
		{
			putchar(lowC);
		}
		}
		putchar('\n');
		return (0);
}
