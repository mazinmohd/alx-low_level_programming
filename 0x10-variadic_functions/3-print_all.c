#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: the format to the type
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separtor = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separtor, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", separtor, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", separtor, va_arg(li, double));
					break;
				case 's':
					s = va_arg(li, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separtor, s);
					break;
				default:
					i++;
					continue;
			}
			separtor = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(li);
}
