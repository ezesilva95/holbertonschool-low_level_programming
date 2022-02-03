#include<stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;
	printf("Size of int: %zu byte(s)\n", sizeof(a));
	printf("Size of char: %zu byte(s)\n", sizeof(b));
	printf("Size of float: %zu byte(s)\n", sizeof(c));
	printf("Size of long int: %zu byte(s)\n", sizeof(d));
	printf("Size of long long int: %zu byte(s)\n", sizeof(e));
	return (0);
}

