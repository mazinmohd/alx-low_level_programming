#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (success)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
