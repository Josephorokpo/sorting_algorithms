#include "sort.h"

void merge(int *array, int *temp, size_t left, size_t mid, size_t right)
{
	size_t i = left, j = mid, k = left;

	printf("[left]:");
	print_array(array + left, mid - left);
	printf("[right]:");
	print_array(array + mid, right - mid);

	while (i < mid && j < right)
	{
		if (array[i] <= array[j])
		{
			temp[k] = array[i];
			i++;
		}
		else
		{
			temp[k] = array[j];
			j++;
		}
		k++;
	}

	while (i < mid)
	{
		temp[k] = array[i];
		i++;
		k++;
	}

	while (j < right)
	{
		temp[k] = array[j];
		j++;
		k++;
	}

	printf("[Done]:");
	print_array(temp + left, right - left);

	for (i = left; i < right; i++)
	{
		array[i] = temp[i];
	}
}

void merge_sort_recursive(int *array, int *temp, size_t left, size_t right)
{
	size_t mid;

	if (right - left <= 1)
		return;

	mid = left + (right - left) / 2;

	merge_sort_recursive(array, temp, left, mid);
	merge_sort_recursive(array, temp, mid, right);

	merge(array, temp, left, mid, right);
}

/**
 * merge_sort - Sorts an array of integers in ascending order
 * using the Merge sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (array == NULL || size < 2)
		return;

	temp = malloc(size * sizeof(int));

	if (temp == NULL)
		return;

	printf("Merging...\n");
	merge_sort_recursive(array, temp, 0, size);

	free(temp);
}
