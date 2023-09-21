#include "lists.h"
/**
 * free_list - delete the memory for linked list
 * @head: the strat of linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		free(temp);

		temp = temp->next;
	}
}
