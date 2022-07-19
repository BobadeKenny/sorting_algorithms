#include "sort.h"

/**
 * cocktail_sort_list - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @list: array to be sorted
 * Return: Null
 */
void cocktail_sort_list(listint_t **list)
{
int swapped;
listint_t temp;
listint_t node;

if (*list == NULL)
{}
temp = *list;
do {
swapped = 0;
while (temp != NULL && temp->next != NULL)
{
if (temp->n > temp->next->n)
{
temp->prev = temp->next;
temp->next = temp->next->next;
temp->next->prev = temp->prev;
temp->next->next = temp->next->prev
swapped = 1;
if (temp->prev == NULL)
*list = temp;
else
temp->prev->next = temp;
print_list(*list);
}
}
} while (swapped);
}
