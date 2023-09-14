#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the separetor between strings
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ps;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ps, n);
	while (i--)
		printf("%s%s", (s = va_arg(ps, char *)) ? s : "(nill)",
				i ? (separator ? separator : "") : "\n");
	va_end(ps);
}
