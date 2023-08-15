#include "main.h"
/**
  * times_table - prints the 9 times table
  *
 */

void times_table(void)
{
	int n = 0, b;

	while (n <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			_putchar((n + 48) * (b + 48));
			_putchar(',');
			_putchar(' ');
			b++;
		}
		n++;
	}
}
