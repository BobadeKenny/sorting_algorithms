#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void copy_array(int *array, size_t start, size_t size, int *copy);
void top_down_split_merge(int *copy, size_t start, size_t size, int *array);
void top_down_merge(int *copy, size_t start,
size_t middle, size_t size, int *array);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size);
void sift_down(int *array, size_t start, size_t end, size_t size);
void radix_sort(int *array, size_t size);
void countingsort(int *array, size_t size, int place);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
int partition_hoare(int *array, int low, int high, size_t size);
void quicksort_hoare(int *array, int low, int high, size_t size);

#endif
