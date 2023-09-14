#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	int i = n, sum = 0;

	if (!n)
		return (0);
	va_start(s, n);

	while (i--)
		sum += va_arg(s, int);

	va_end(s);

	return (sum);
}
