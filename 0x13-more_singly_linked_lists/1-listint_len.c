#include "lists.h"
/**
 * listint_len - count the number of element in list
 * @h: first element of list
 * Return: the number of element in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}

