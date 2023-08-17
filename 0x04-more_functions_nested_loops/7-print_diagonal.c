#include "main.h"

/**
  * print_diagonal - draw a diagonal line
  * @n: input vlue
 */

void print_diagonal(int n)
{
	int a;
	
	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('\\');
	}
	_putchar('\n');
}
