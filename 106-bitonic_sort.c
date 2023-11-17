#include "sort.h"

/**
 * bitonic_merge - Merges two arrays in ascending or descending order
 * @array: The array to be sorted
 * @size: Size of the array
 * @up: 1 for ascending order, 0 for descending order
 */
void bitonic_merge(int *array, size_t size, int up)
{
	size_t i, k;
	int temp;

	if (size > 1)
	{
		k = size / 2;
		for (i = 0; i < k; i++)
		{
			if ((array[i] > array[i + k]) == up)
			{
				temp = array[i];
				array[i] = array[i + k];
				array[i + k] = temp;
				print_array(array, size);
			}
		}
		bitonic_merge(array, k, up);
		bitonic_merge(array + k, k, up);
	}
}

/**
 * bitonic_sort_recursive - Sorts a bitonic sequence in ascending or
 * descending order
 * @array: The array to be sorted
 * @size: Size of the array
 * @up: 1 for ascending order, 0 for descending order
 */
void bitonic_sort_recursive(int *array, size_t size, int up)
{
	size_t k;

	if (size > 1)
	{
		k = size / 2;
		bitonic_sort_recursive(array, k, 1);
		bitonic_sort_recursive(array + k, k, 0);
		bitonic_merge(array, size, up);
	}
}

/**
 * bitonic_sort - Sorts an array of integers in ascending order
 * using the Bitonic sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	int up = 1; /* 1 for ascending order */

	bitonic_sort_recursive(array, size, up);
}
