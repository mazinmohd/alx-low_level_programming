#include "main.h"
/**
  * print_square - print a sqaure
  * @size: input value
 */

void print_square(int size)
{
	int a, b;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putcahr('#');
			_putchar('\n');
		}
	}
}
