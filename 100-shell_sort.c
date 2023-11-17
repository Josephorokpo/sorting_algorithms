#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the Shell sort algorithm with Knuth sequence.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	int interval, i, j, temp;

	if (array == NULL || size < 2)
		return;

	interval = 1;
	while (interval <= (int)size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < (int)size; i++)
		{
			temp = array[i];
			j = i;

			while (j > interval - 1 && array[j - interval] >= temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}
			array[j] = temp;
		}

		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
