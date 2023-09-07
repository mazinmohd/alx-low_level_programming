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

	m = malloc(r * sizeof(int));

	if (m == 0)
		return (NULL);

	for (i = 0; i < r; i++)
		*(m + 1) = min + i;

	return (m);
}
