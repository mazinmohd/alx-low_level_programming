#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head != NULL)
	{
		temp = *head;
		while ((temp2 = temp) != NULL)
		{
			temp = temp->next;
			free(temp2);
		}
		*head = NULL;
	}
}

