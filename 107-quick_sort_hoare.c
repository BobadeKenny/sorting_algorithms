#include "sort.h"
#include <math.h>

/**
 * quick_sort_hoare - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void quick_sort_hoare(int *array, size_t size)
{
if (size < 2)
{
return;
}
quicksort_hoare(array, 0, size - 1, size);
}

/**
 * quicksort_hoare - sorts an array of integers
 * in ascending order using the Lomuto partition
 * @array: array to be sorted
 * @low: start index
 * @high: ending index
 * @size: size of the array
 * Return: Null
 */
void quicksort_hoare(int *array, int low, int high, size_t size)
{
int p;

if (low < high)
{
p = partition_hoare(array, low, high, size);
quicksort_hoare(array, low, p, size);
quicksort_hoare(array, p + 1, high, size);
}
}

/**
 * partition_hoare - sorts an array of integers
 * in ascending order using the Lomuto partition
 * @array: array to be sorted
 * @low: start index
 * @high: ending index
 * @size: size of the array
 * Return: Null
 */
int partition_hoare(int *array, int low, int high, size_t size)
{
int pivot, temp;
int i, j;

pivot = array[low];
i = low - 1;
j = high + 1;
while(1)
{
do
{
i++;
}
while(array[i] < pivot);
do
{
j--;
}
while(array[j] > pivot);
if (i < j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
else
{
return(j);
}
}
}
