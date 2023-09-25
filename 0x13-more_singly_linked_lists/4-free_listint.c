#include "lists.h"
/**
 * free_listint - free the list
 * @head: the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

