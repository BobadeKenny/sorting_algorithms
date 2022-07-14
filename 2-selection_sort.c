#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */

void selection_sort(int *array, size_t size)
{
    size_t i;
    size_t j;
    size_t min;
    int temp;

    for (i=0; i<size; i++)
    {
        min = i;
        for (j=i+1; j<size; j++)
        {
            if (array[j]<array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;
            print_array(array, size);
        }
    }
}
