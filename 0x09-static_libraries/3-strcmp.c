#include "main.h"

/**
  * _strcmp - compare two string
  * @s1: input value
  * @s2: input value
  * Return: 0 if it the same
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
