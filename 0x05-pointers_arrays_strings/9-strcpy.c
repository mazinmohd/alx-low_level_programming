#include "main.h"
/**
  * *_strcpy - copies the string
  * @*dest: input vlaue
  * @*src: input vlaue
  * Return: return the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
