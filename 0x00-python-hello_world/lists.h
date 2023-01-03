#ifndef LISTS_H
#define LISTS_H

#include<stdlib>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}list_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, cont int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /*LISTS_H*/
