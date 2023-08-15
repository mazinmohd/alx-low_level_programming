#include "main.h"
/**
  * jack_bauer - prints every minute of the day
  *
 */

void jack_bauer(void)
{
	int a = 0, b;

	while (a <= 24)
	{
		b = a;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			if (a + b != 82)
				_putchar('\n');
			b++;
		}
		a++;
	}
}
