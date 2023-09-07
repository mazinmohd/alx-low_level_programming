#include "main.h"
#include <stdlib.h>
/**
  * *array_range - create array of integers
  * @min: input
  * @max: input
  * Return: the array
 */

int *array_range(int min, int max)
{
	int i, r = 0;
	int *m;

	if (min > max)
		return (NULL);

	r = ((max + 1) - min);

	m = malloc(rang * sizeof(int));

	if (m == 0)
		return (NULL);

	for (i = 0 i < range; i++)
		*(p + 1) = min + i;

	return (p);
}
