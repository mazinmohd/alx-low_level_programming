#include <stdio.h>
/**
  * main - print first argv
  * @argc: int
  * @argv: array
  * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
