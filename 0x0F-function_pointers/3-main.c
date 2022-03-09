#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *op = argv[2];
	int oprt;
	int ops = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	oprt = get_op_func(op)(num1, num2);

	if (ops != '+' && ops != '-' && ops != '/' && ops != '*' && ops != '%')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt);
	return (0);
}
