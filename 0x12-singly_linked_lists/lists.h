#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*  print a list   */
size_t print_list(const list_t *h);

/*  number of element  */
size_t list_len(const list_t *h);

/*  add node at the beginning  */
list_t *add_node(list_t **head, const char *str);

/*  add node at the end  */
list_t *add_node_end(list_t **head, const char *str);

/*  free the linked list  */
void free_list(list_t *head);
#endif
