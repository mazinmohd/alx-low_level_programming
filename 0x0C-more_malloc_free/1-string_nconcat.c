#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concat two string
  * @s1: input
  * @s2: input
  * @n: input
  * Return: the concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	m = malloc(size1 + n + 1);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
