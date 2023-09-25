#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head: first element of list
 * @index: the index of the element we want to delete it
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *del;
	listint_t *temp;

	del = *head;

	if (index != 0)
		for (i = 0; i < index - 1 && del != NULL; i++)
			del = del->next;

	if (del == NULL || (del->next == NULL && index != 0))
		return (-1);

	temp = del->next;

	if (index != 0)
	{
		del->next = temp->next;
		free(temp);
	}
	else
	{
		free(del);
		*head = temp;
	}

	return (1);
}

