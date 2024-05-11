#include "search_algos.h"
/**
  * recursive_search - searches for a value in array
  * @array: the array
  * @size: size of array
  * @value: value to search
  * Return: index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t haf = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (haf && size % 2 == 0)
		haf--;

	if (value == array[haf])
		return ((int)haf);

	if (value < array[haf])
		return (recursive_search(array, haf, value));

	haf++;

	return (recursive_search(array + haf, size - haf, value) + haf);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int ind;

	ind = recursive_search(array, size, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);

	return (ind);
}
