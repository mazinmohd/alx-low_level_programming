#include "main.h"
/**
  * *_strstr - locates a substring
  * @haystack: input value
  * @needle: input value
  * Return: the location
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
