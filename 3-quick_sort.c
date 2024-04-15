#include "sort.h"

/**
 * sort_partition - sort the partition in the array
 * @array: array to sort
 * @first: the index of the first element in the sublist (partition in the array)
 * @last: the index of the last element int the sublist (partition in the array)
 * @size: the size of the array
 */
void sort_partition(int *array, int size, int first, int last)
{
	int pivot =  0;

	if (first < last)
	{
		if (pivot - first > 1)
		{
			sort_partition(array, size, first, pivot - 1);
		}
		if (last - pivot > 1)
		{
			sort_partition(array, size, pivot + 1, last);
		}
	}
		
}
/**
 * quick_sort - sort a given array using the quick
 sort algorithm in the ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
}
/**
 * swap - swaps the items at index @first_index with the item at index at @second_index
 * @array: a pointer to the array to integers
 * @fist_index: the first element index
 * @second_index: the second element index
 */
void swap(int ** array, int first_index, int second_index)
{
	int temp = 0;

	temp = (*array)[first_index];
	(*array)[first_index] = (*array)[second_index];
	(*array)[second_index] = temp;
}
/**
 * get_pivot_index - determine the index for the next pivot in the sublist
 * @array: the array to be sorted
 * @size: the size of the array
 * @first: the index of the first element in the sublist (partition in the array)
 * @last: the indext of the last element in the sublist (partition in the array)
 * return: the index for the new pivot
 */
int get_pivot_index(int *array, int size, int first, int last)
{
	int pivot = 0;
	int left = 0, new_pivot = 0;

	pivot = last;
	left = first;
	new_pivot = first - 1;

	for (; left < last; left++)
	{
		if (array[left] <= array[pivot])
		{
			new_pivot++;
			if (new_pivot != left)
			{
				swap(&array, new_pivot, left);
				print_array(array, size);
			}
		}
	}
	if ((new_pivot + 1) != last)
	{
		swap(&array, new_pivot + 1, last);
		print_array(array, size);
	}
	return (new_pivot + 1);
}
