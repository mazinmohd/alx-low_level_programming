#include "lists.h"
/**
 * print_listint_safe - print a linked list
 * @head: first node of linked list
 * Return: the numver of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
