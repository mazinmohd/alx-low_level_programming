#include "main.h"
/**
  * *malloc_checked - locates memory
  * @b: input
  * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);

}
