#include "lists.h"
/**
  * dlistint_len - count the number of element in linked list
  * @h: the linked list
  * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; i++)
		h = h->next;

	return (i);
}
