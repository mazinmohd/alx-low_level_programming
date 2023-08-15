#include "main.h"

/**
  * print_sign - print if number great than zero or not
  *
  * @n: input value
  *
  * Return: return 1 if gtz return 0 if qz return -1 if ltz
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
