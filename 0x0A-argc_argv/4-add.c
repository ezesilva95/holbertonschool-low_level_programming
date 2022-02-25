#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: Number of command arguments
 * @argv: Array name
 * Return: 1 or 0 
 */
int main(int argc, char *argv[])
{
	unsigned int a;
	int b, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (b = 1; b < argc; b++)
	{
		for (a = 0; a < strlen(argv[a]); a++)
		{
			if (!isdigit(argv[b][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}
