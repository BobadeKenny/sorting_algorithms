#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - sorts an array of integers
 * in ascending order using the counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */

void counting_sort(int *array, size_t size)
{
int i, k;
size_t j;
int *count;
int *output;

if (size < 2)
{
return;
}
output = malloc(sizeof(int) * size);
k = array[0];
for (j = 1; j < size; j++)
{
if (array[j] > k)
{
k = array[j];
}
}
count = malloc(sizeof(int) * (k + 1));
for (i = 0; i <= k; i++)
{
count[i] = 0;
}
for (j = 0; j < size; j++)
{
count[array[j]] += 1;
}
for (i = 1; i <= k; i++)
{
count[i] += count[i - 1];
}
print_array(count, k + 1);
for (i = size - 1; i >= 0; i--)
{
count[array[i]] -= 1;
output[count[array[i]]] = array[i];
}
for (j = 0; j < size; j++)
{
array[j] = output[j];
}
free(count);
free(output);
}
