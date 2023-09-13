#include <stdio.h>
#include <stdlib.h>
/**
 * main - print ownopcodes
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 if success else if fail
 */

int main(int argc, char *argv[])
{
	int i, num;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}

	return (0);
}
