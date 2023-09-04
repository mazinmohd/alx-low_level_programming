#include "main.h"
/**
  * *str_concat - concatenates two string
  * @s1: input
  * @s2: input
  * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j, size1, size2;

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	size1++;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	size2++;
	m = malloc((size1 + size2) * sizeof(*s1));
	for (i = 0; i < size1; i++)
		m[i] = s1[i];
	for (j = 0; j < size2; j++)
		m[i + j] = s2[j];

	return (m);
}
