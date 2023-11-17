#include "sort.h"

void counting_sort(int *array, size_t size)
{
	size_t i;
	int max_value = array[0];
	int *count_array;
	size_t j;

	if (array == NULL || size < 2)
		return;

	for (i = 1; i < size; ++i)
	{
		if (array[i] > max_value)
			max_value = array[i];
	}

	count_array = malloc((max_value + 1) * sizeof(int));

	if (count_array == NULL)
		return;

	for (i = 0; i <= (size_t)max_value; ++i)
		count_array[i] = 0;

	for (i = 0; i < size; ++i)
		++count_array[array[i]];

	j = 0;

	for (i = 0; i <= (size_t)max_value; ++i)
	{
		while (count_array[i]-- > 0)
			array[j++] = i;
	}

	printf("%d", array[0]);

	for (i = 1; i < size; ++i)
		printf(", %d", array[i]);

	printf("\n");

	free(count_array);
}
