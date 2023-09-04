#include "main.h"
/**
  * *_strdup - copy of the string
  * @str: input
  * Return: pointer
 */

char *_strdup(char *str)
{
	int i, size;
	char *m;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	m = malloc(size * sizeof(*str));

	if (m == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = str[i];
	return (m);
}
