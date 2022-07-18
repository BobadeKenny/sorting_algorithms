#include "sort.h"

/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void quick_sort(int *array, size_t size)
{

quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - sorts an array of integers
 * in ascending order using the Lomuto partition
 * @array: array to be sorted
 * @low: start index
 * @high: ending index
 * @size: size of the array
 * Return: Null
 */
void quicksort(int *array, int low, int high, size_t size)
{
int p;

if (low < high)
{
p = partition(array, low, high, size);
quicksort(array, low, p - 1, size);
quicksort(array, p + 1, high, size);
}
}

/**
 * partition - sorts an array of integers
 * in ascending order using the Lomuto partition
 * @array: array to be sorted
 * @low: start index
 * @high: ending index
 * @size: size of the array
 * Return: Null
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot, temp;
int i, j;

pivot = array[high];
i = low - 1;
for (j  = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
i += 1;
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
return (i);
}
