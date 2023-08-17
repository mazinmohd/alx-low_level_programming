#include "main.h"
/**
  * more_numbers - print more number
  *
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <=9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar('1');
				c = b % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
