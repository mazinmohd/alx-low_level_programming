#include "function_pointers.h"
/**
  * int_index - search for integer
  * @array: array of integer
  * @size: the size of search
  * @cmp: the function
  * Return: 0 if success -1 if fialed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
