#include "main.h"
/**
  * *create_array - crates an array of chars
  * @size: input
  * @c: input
  * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;

	return (m);
}
