#include "main.h"

/**
  * *_strcat - concatenate two strings
  * @dest: input value
  * @src: input value
  * Return: the concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
