#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node of linked list
 * Return: number of elements in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
