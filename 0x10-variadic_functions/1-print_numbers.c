#include "variadic_functions.h"
/**
 * print_numbers - print the numbers you give it
 * @separator: the separator between the numbers
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	int i = n, x;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pr, n);
	while (i--)
	{
		x = va_arg(pr, int);
		printf("%d%s", x, i ? (separator ? separator : "") : "\n");
	}
	va_end(pr);
}

