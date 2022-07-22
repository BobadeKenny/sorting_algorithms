#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order
 * @list: list to be sorted
 * Return: Null
 */

void insertion_sort_list(listint_t **list)
{
listint_t *node;
listint_t *temp;

if (*list == NULL)
{
return;
}
node = (*list)->next;
while (node != NULL)
{
temp = node;
while (temp->prev != NULL && temp->prev->n > temp->n)
{
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
temp->next = temp->prev;
temp->prev = temp->next->prev;
temp->next->prev = temp;
if (temp->prev == NULL)
*list = temp;
else
temp->prev->next = temp;
print_list(*list);
}
node = node->next;
}
}
