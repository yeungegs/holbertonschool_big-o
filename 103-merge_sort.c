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

	low = 0;
	high = size - 1;

	sort(array, low, high);
}

/**
 * sort - splits array and sorts recursively
 * @array: list of integers
 * @low: first index of array
 * @high: last index of array
 * @size: size of array
 */
void sort(int *array, int low, int high)
{
	int mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		sort(array, low, mid);
		sort(array, mid + 1, high);
		merge(array, low, mid, high);
	}
}

/**
 * merge - merges sorted arrays
 * @arrayA: list of integers
 * @low: first index of array
 * @mid: middle of array
 * @high: last index of array
 * @size: size of array
 */
void merge(int *array, int low, int mid, int high)
{
	int *temp;
	int left;
	int right;
	int i;

	left = low;
	right = mid + 1;

	if (len(array) > 0)
	{
		temp = malloc(sizeof(int) * len(array));
		if (temp == NULL)
			return;
	}

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, mid);
	printf("[right]: ");
	print_array(array, high - mid);

	for (i = low; left <= mid && mid <= high; i++)
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
	printf("LENGTH OF ARRAY: %d\n", len(array));

	free(temp);
}

/**
 *
 */
int len(int *array)
{
	int i;

	for (i = 0; array[i] != '\0'; i++)
		;

	return i;
}
