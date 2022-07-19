#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 *in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
int temp;
int swapped;

if (size < 2)
{
return;
}
do {
swapped = 0;
for (i = 1; i < size; i++)
{
if (array[i - 1] > array[i])
{
temp = array[i - 1];
array[i - 1] = array[i];
array[i] = temp;
print_array(array, size);
swapped = 1;
}
}
} while (swapped);
}
