#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */

void insertion_sort_list(listint_t **list)
{
    listint_t temp;
    listint_t swap;
    listint_t *node = *list;

    node = node->next;

    while (node->next != NULL)
    {
        temp = *node;
        while (temp->prev->n > temp->n)
        {
            swap = temp->prev;
            temp->prev = temp;
            temp = swap;
            print_list(*temp);
            temp = temp->prev;
        }
        node = node->next;
    }
}
