#include "sort.h"

/**
 * radix_sort - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void radix_sort(int *array, size_t size)
{
int max;
size_t i;

max = array[0];
for (i = 1; i < size; j++)
{
if (array[i] > max)
{
max = array[i];
}
}
}
