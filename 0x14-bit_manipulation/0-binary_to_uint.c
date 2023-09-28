#include "main.h"
/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: pointing to a string of 0 and 1
 * Return: the converted number of 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cvt = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		cvt = cvt * 2 + (*b++ - '0');
	}
	return (cvt);
}
