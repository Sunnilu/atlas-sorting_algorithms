#include "sort.h"
#include <stdlib.h>

/**
 * shell_sort - shell sor - knuth sequence
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1, i, j, tmp;

	while (gap < ((int) (size)))
		gap = (3 * gap) + 1;
	for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < (int)size; i += 1)
		{
			tmp (i + gap; i < (int)size; i += 1)
				
				tmp = array[1];

			for (j = i; j >= gap && array[j - gap] 				> tmp; j -= gap)
				array[j] = array[j - gap];

			array[j] = tmp;
		}
		print_array(array, size);
	}
}
			
