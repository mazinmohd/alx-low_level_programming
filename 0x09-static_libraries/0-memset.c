#include "main.h"
/**
  * *_memset - change memory with comstant byte
  * @s: input value
  * @b: input value
  * @n: input value
  * Return: the new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
