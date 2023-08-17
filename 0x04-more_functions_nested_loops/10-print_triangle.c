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
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
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
