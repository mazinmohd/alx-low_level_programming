#include "main.h"

/**
  * _puts - function print string
  * @str: input value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
