#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - do the mathimatical opration
 * @argc: the number of argument
 * @argv: array of argument
 * Return: 0 if sucsseful else if fail
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fun(num1, num2);

	printf("%d\n", result);

	return (0);
}
