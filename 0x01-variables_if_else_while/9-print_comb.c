#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
