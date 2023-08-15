#include "main.h"

/**
  * print_last_digit - print last digit of number
  *
  * @n : value of input
  *
  * Return: ldigit
 */

int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
		ldigit = (-1) * (n % 10);
	else
		ldigit = n % 10;
	_putchar(ldigit + '0');
	return (ldigit);
}
