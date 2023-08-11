#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (success)
 */
int main(void)
{
	char a = '0';
	char b = '0';

	while (a <= '9')
	{
		putchar(a);
		while (b <= '9')
		{
			putchar(b);
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
