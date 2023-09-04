#include "main.h"
/**
  * **alloc_grid - 2 dimensional array
  * @width: input
  * @height: input
  * Return: integer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **m;

	m = malloc(sizeof(*m) * height);

	if (width <= 0 || height <= 0 || m == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(**m) * width);
		if (m[i] == 0)
		{
			while (i--)
				free(m[i]);
			free(m);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
