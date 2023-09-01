#include <stdlib.h>
#include <stdio.h>
/**
  * main - print first argv
  * @argc: int
  * @argv: array
  * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (--argc)
		{
			for (c = argv[argc]; *c; c++)
			{
				if (*c < '0' || *c > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
