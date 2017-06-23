#include "sort.h"

/**
 * merge_sort - sorts array of integers in ascending order using
 * top-down merge sort algorithm
 * @array: list of integers
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int low;
	int high;
	int *temp;

	low = 0;
	high = size - 1;

	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
		return;

	sort(array, low, high, temp);

	free(temp);
}

/**
 * sort - splits array and sorts recursively
 * @array: list of integers
 * @low: first index of array
 * @high: last index of array
 */
void sort(int *array, int low, int high, int *temp)
{
	int mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		sort(array, low, mid, temp);
		sort(array, mid + 1, high, temp);
		merge(array, low, mid, high, temp);
	}
}

/**
 * merge - merges sorted arrays
 * @array: list of integers
 * @low: first index of array
 * @mid: middle of array
 * @high: last index of array
 */
void merge(int *array, int low, int mid, int high, int *temp)
{
	int left;
	int right;
	int i;

	left = low;
	right = mid + 1;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, mid);
	printf("[right]: ");
	print_array(array, high - mid);

	for (i = low; left <= mid && right <= high; i++)
	{
		if (array[left] <= array[right])
		{
			temp[i] = array[left];
			left++;
		}
		else
		{
			temp[i] = array[right];
			right++;
		}
	}

	while (left <= mid)
	{
		temp[i] = array[left];
		i++;
		left++;
	}

	while (right <= high)
	{
		temp[i] = array[right];
		i++;
		right++;
	}

	for (i = 0; i <= high; i++)
		array[i] = temp[i];

	printf("[Done]: ");
	print_array(array, len(array));
}

/**
 * len - returns length of array
 * @array: array to evaluate
 * Return: length of array
 */
int len(int *array)
{
	int i;

	for (i = 0; array[i] != '\0'; i++)
		;

	return (i);
}
