#ifndef LISTS_H
#define LISTS_H
#include<stdlib.h>
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint;
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_ *head);
int check_cycle(listint_t *list);
#endif
