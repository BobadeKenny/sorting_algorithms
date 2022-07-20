#include "sort.h"

/**
 * bitonic_sort - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void bitonic_sort(int *array, size_t size)
{
size_t i, k, l;
int j, temp;

for(i = 2; i <= size; i *= 2)
{
for(j = i / 2; j > 0; j /= 2)
{
for(k = 0; k < size; k++)
{
l = i ^ j;
if(l > i)
{
if((((i & k) == 0) && (array[i] > array[l])) || (((i & k )!= 0) && (array[i] < array[l])))
{
temp = array[i];
array[i] = array[l];
array[l] = temp;
print_array(array, size);
}
}
}
}
}
}