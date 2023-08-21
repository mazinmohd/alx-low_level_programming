#include "main.h"

/**
  * _puts - function print string
  * @str: input value
 */

void _puts(char *str)
{
	for (*str = 0; *str != '\0'; *str++)
		_putchar(*str + '0');
	_putchar('\n');
}
