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
int max, place;
size_t i;

max = array[0];
for (i = 1; i < size; j++)
{
if (array[i] > max)
{
max = array[i];
}
}
for (place = 1; max / place > 0; place *= 10)
{
countingSort(array, size, place);
print_array(array, size);
}
}

void countingSort(int *array, size_t size, int place)
{
int *output;
int *count;
int max, i;

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
for (int i = 0; i < max; ++i)
{
count[i] = 0;
}
for (int i = 0; i < size; i++)
{
count[(array[i] / place) % 10]++;
}
for (int i = 1; i < 10; i++)
{
count[i] += count[i - 1];
}
for (int i = size - 1; i >= 0; i--)
{
output[count[(array[i] / place) % 10] - 1] = array[i];
count[(array[i] / place) % 10]--;
}
for (int i = 0; i < size; i++)
{
array[i] = output[i];
}
free(count);
free(output);
}