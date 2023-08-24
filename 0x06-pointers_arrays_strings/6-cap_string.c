#include "main.h"
#include <stdio.h>
/**
  * is_low - test the string
  * @c: input value
  * Return: 1 or 0
 */

int is_low(char c)
{
	return (c >= 97 && c <= 122);
}
/**
  * is_del - test input
  * @c: input value
  * Return: retun 0 or 1
 */

int is_del(char c)
{
	int i;
	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
  * *cap_string - capitalizes all words of string
  * @str: input value
  * Return: the string in capital
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int fdel = 1;

	while (*str)
	{
		if (is_del(*str))
			fdel = 1;
		else if (is_low(*str) && fdel)
		{
			*str -= 32;
			fdel = 0;
		}
		else
			fdel = 0;
	}
	return (ptr);

}
