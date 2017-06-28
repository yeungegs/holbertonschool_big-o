#ifndef SORT
#define SORT
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: Pointer to the previous element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void my_sort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *array, int i, int j);
void merge_sort(int *array, size_t size);
void sort(int *array, int low, int high, int *temp);
void merge(int *arrayA, int low, int mid, int high, int *temp);
int len(int *array);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size);
void sift_down(int *array, int low, int high, size_t size);

#endif /* SORT */
