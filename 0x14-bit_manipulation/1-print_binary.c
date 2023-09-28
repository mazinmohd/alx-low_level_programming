#include "main.h"
/**
 * print_binary - prints the binary representation of number
 * @n: the number in base 10
 */
void print_binary(unsigned int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
