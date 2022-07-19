#include "sort.h"

/**
 * shell_sort - sorts an array of integers
 *in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void shell_sort(int *array, size_t size)
{
size_t gap, i, j;
int temp;

if (size < 2)
{
return;
}
gap = 1;
while (gap < size)
{
for (i = gap; i < size; i += 1)
{
temp = array[i];
for (j = i; array[j - gap] > temp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = temp;
}
gap = gap * 3 + 1;
print_array(array, size);
}
}