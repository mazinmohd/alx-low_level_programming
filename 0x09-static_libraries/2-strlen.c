#include "main.h"

/**
  * _strlen - function reset variable to 98
  * @s: input value
  * Return: the length of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
