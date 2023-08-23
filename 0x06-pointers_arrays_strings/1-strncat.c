#include "main.h"
/**
  * *_strncat - concatente two string
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: return pointer to result
 */

char  *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && dest[j]; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
