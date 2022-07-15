#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *next;
    listint_t *sorted = NULL;
    listint_t *node = *list;

    node = node->next;

    while (node != NULL)
    {
        next = node->next;
        node->prev = node->next = NULL;
        while (temp->prev->n > temp->n)
        {
            swap = temp->prev->prev;
            swap->next = temp;
            swap->next->next = temp->prev;
            print_list(swap);
        }
        node = node->next;
    }
}
