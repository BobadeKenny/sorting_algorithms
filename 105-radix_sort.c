#include "sort.h"
#include <stdlib.h>

/**
 * radix_sort - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void radix_sort(int *array, size_t size)
{
int max, place;
size_t i;

if (size < 2)
{
return;
}
max = array[0];
for (i = 1; i < size; i++)
{
if (array[i] > max)
{
max = array[i];
}
}
for (place = 1; max / place > 0; place *= 10)
{
countingsort(array, size, place);
print_array(array, size);
}
}

/**
 * countingsort - sorts an array of integers
 * in ascending order using the counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @place: significant place
 * Return: Null
 */
void countingsort(int *array, size_t size, int place)
{
int *output;
int *count;
int max, j;
size_t i;

output = malloc(sizeof(int) * (size + 1));
max = (array[0] / place) % 10;
for (i = 1; i < size; i++)
{
if (((array[i] / place) % 10) > max)
{
max = array[i];
}
}
count = malloc(sizeof(int) * (max + 1));
for (j = 0; j < max; ++j)
{
count[j] = 0;
}
for (i = 0; i < size; i++)
{
count[(array[i] / place) % 10]++;
}
for (j = 1; j < 10; j++)
{
count[j] += count[j - 1];
}
for (j = size - 1; j >= 0; j--)
{
output[count[(array[j] / place) % 10] - 1] = array[j];
count[(array[j] / place) % 10]--;
}
for (i = 0; i < size; i++)
{
array[i] = output[i];
}
free(count);
free(output);
}
