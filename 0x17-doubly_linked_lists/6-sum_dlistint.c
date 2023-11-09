#include "lists.h"
/**
  * sum_dlistint - count the sum of data of linked list
  * @head: the head of linked list
  * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
