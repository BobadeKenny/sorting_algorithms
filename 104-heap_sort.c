#include "sort.h"

/**
 * heap_sort - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void heap_sort(int *array, size_t size)
{
int i, temp;

heapify(array, size);
i = size - 1;
while (i > 0)
{
temp =  array[0];
array[0] = array[i];
array[i] = temp;
print_array(array, size);
i -= 1;
sift_down(array, 0, i, size);
}
}

/**
 * heapify - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Null
 */
void heapify(int *array, size_t size)
{
int start;

start = (size - 2) / 2;
while (start >= 0)
{
sift_down(array, start, size - 1, size);
start -= 1;
}
}

/**
 * sift_down - sorts an array of integers
 * in ascending order using the heap sort algorithm
 * @array: array to be sorted
 * @start: size of the array
 * @end: size of the array
 * @size: size of the array
 * Return: Null
 */
void sift_down(int *array, size_t start, size_t end, size_t size)
{
size_t swap, root, child;
int temp;

root = start;
while (2 * root <= end)
{
child = 2 * root;
swap = root;
if (array[swap] < array[child])
{
swap = child;
}
if (child + 1 <= end && array[swap] < array[child + 1])
{
swap = child + 1;
}
if (swap == root)
{
return;
}
else
{
temp = array[root];
array[root] = array[swap];
array[swap] = temp;
root = swap;
print_array(array, size);
}
}
}
