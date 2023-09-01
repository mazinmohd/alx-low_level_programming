#include "main.h"
/**
  * *_strchr - locates a character in a string
  * @s: input value
  * @c: input value
  * Return: the location
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
