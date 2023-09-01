#include <stdio.h>
/**
  * main - print first argv
  * @argc: int
  * @argv: array
  * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
