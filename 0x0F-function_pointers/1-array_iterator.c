#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - executes a function given as parameter
  * @array: array of function
  * @size: size of array
  * @action: pointer to the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *n = array + size - 1;

	if (array && size && action)
		while (array <= n)
			action(*array++);
}
