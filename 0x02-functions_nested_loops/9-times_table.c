#include "main.h"
/**
  * times_table - prints the 9 times table
  *
 */

void times_table(void)
{
	int n = 0, b, x;

	while (n <= 9)
	{
		_putchar(48);
		b = 1;
		while (b <= 9)
		{
			_putchar(',');
			_putchar(' ');

			x = n * b;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			b++;
		}
		putchar('\n');
		n++;
	}
}
