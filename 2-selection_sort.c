#include "sort.h"

/**
 * selection_sort - sorts an array of integers using Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int i, j;
	int min; /* smallest number */
	int temp; /* holds temp number */
	int size_conv = size;

	for (i = 0; i < size_conv - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size_conv; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
