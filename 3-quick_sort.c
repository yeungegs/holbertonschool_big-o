#include "sort.h"

/**
 * quick_sort - function that sorts an array of ints in ascending order
 * using quick sort algorithm
 * @array: list of numbers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int p;

	if (size > 0)
	{
		p = partition(array, size);
		puts("before q_s lo");
		quick_sort(array, p);
		puts("before q_s hi");
		quick_sort(array, size - (p + 1));
	}
}

/**
 * partition - sections an array using Lomuto quick_sort algo
 * @array: list of integers
 * @size: size of array
 * Return: position of pivot in array
 */
int partition(int *array, size_t size)
{
	int pivot;
	int i;
	int j;
	int high;

	pivot = array[size - 1];
	i = -1;
	high = size - 1;

	for (j = 0; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	return (i);


/**
 * swap - swap values in array
 * @array: list of ints
 * @i: first element to swap
 * @j: second element to swap
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
