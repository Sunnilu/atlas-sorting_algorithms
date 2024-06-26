#include "sort.h"

/**
 * selection_sort - sort a given array using the bubble sort algorithm in the ascending order.
 * @array: the array to be sorted
 * @size: the size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t min_value_index = 0;
	size_t pass = 0, index = 0;
	size_t passes_required = 0;
	int temp = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	passes_required = size - 1;
	for (pass = 0; pass < passes_required; pass++)
	{
		min_value_index = pass;
		for (index = pass + 1; index < size; index++)
		{
			if (array[index] < array[min_value_index])
			{
				min_value_index = index;
			}
		}
		temp = array[pass];
		array[pass] = array[min_value_index];
		array[min_value_index] = temp;
		if (min_value_index > pass)
		{
			print_array(array, size);
		}
	}
}
