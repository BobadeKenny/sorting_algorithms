#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * merge_sort - sorts an array of integers
 * in ascending order using the merge sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void merge_sort(int *array, size_t size)
{
int *copy = malloc(sizeof(int) * size);
copy_array(array, 0, size, copy);
top_down_split_merge(copy, 0, size, array);
}

/**
 * copy_array - make a one time copy of array
 * @array: array to be copied
 * @start: starting index
 * @size: size of the array
 * @copy: copied array
 * Return: Null
 */
void copy_array(int *array, size_t start, size_t size, int *copy)
{
size_t i;
for (i = start; i < size; i++)
{
copy[i] = array[i];
}
}

/**
 * top_down_split_merge - sort data from copy into array
 * @array: array to be copied
 * @start: starting index
 * @size: size of the array
 * @copy: copied array
 * Return: Null
 */
void top_down_split_merge(int *copy, size_t start, size_t size, int *array)
{
size_t middle;
if (size - start <= 1)
{
return;
}
middle = (start + size) / 2;
top_down_split_merge(array, start, middle, copy);
top_down_split_merge(array, middle, size, copy);
top_down_merge(copy, start, middle, size, array);
}

/**
 * top_down_merge - sort results from copy into array
 * @array: array to be copied
 * @start: starting index
 * @middle: middle index
 * @size: size of the array
 * @copy: copied array
 * Return: Null
 */
void top_down_merge(int *copy, size_t start,
size_t middle, size_t size, int *array)
{
size_t i, j, k;

i = start;
j = middle;
printf("Merging...\n");
printf("[Left]: ");
print_array(copy, middle - start);
printf("[Right]: ");
print_array(copy, size - middle);
for (k = start; k < size; k++)
{
if (i < middle && (j >= size || copy[i] <= copy[j]))
{
array[k] = copy[i];
i += 1;
}
else
{
array[k] = copy[j];
j += 1;
}
}
}
