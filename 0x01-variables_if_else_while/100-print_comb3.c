#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (success)
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		while (b <= '9')
		{
			putchar(b + '0');
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
