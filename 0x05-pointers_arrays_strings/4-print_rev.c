#include "main.h"

/**
  * print_rev - function print string reverse
  * @s: input value
 */

void print_rev(int *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s(i));
	_putchar('\n');
}
