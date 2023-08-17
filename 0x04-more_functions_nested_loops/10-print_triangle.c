#include "main.h"
/**
  * print_triangle - print tringle
  * @size: input vlaue
 */

void print_triangle(int size)
{
	int a, b;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
