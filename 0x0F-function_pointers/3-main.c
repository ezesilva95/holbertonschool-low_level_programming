#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - main
 *@argc: argc
 *@argv: argv
 *Return: ..
 */
int main(int argc, char *argv[])
{
	int num1, num2, oprt, opc;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	opc = argv[2][0];

	if ((opc != '+' && opc != '-' && opc != '/' && opc != '*' && opc != '%')
			|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	oprt = get_op_func(op)(num1, num2);

	printf("%d\n", oprt);
	return (0);
}
