#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void quick_sort(int *array, size_t size)
{
size_t high, low;

high = size - 1;
low = 0;
quicksort(array, low, high, size);
}

void quicksort(int *array, size_t low, size_t high, size_t size)
{
int p;

if (low >= high || low < 0.0)
{}
p = partition(array, low, high, size);
quicksort(array, low, p-1, size);
quicksort(array, p+1, high, size);
}

int partition(int *array, size_t low, size_t high, size_t size)
{
int pivot, temp;
size_t i, j;

pivot = array[high];
i = low - 1;
for(j  = low; j < high; j++)
{
if (array[j] <= pivot)
{
i += 1;
}
temp = array[i];
array[i] = array[j];
array[j] = temp;
i += 1;
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
}
return (i);
}