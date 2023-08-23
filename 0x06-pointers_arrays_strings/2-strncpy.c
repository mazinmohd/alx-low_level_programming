#include "main.h"
/**
  * *_strncpy - copies a strings
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: the copy string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
