#include <stdio.h>
/**
  * main - Entry point
  *
  * Description : program print all alphabet
  *
  * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
