#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10 time
  *
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 11; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		putchar('\n');
	}
}
