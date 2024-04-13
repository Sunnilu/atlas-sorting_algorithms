#include <stdio.h>
#include "sort.h"

/**
bubble_sort - sort an array of integers in ascending order
* @array: an array of integers to sort
* @size: the size of the array
* @n: number of intergers
* @t: the size
*/
void bubble_sort(int *array, size_t size) 
{
    size_t n = 0, t = size;
    int holder;

    if (array == NULL)
	    return;
    for (t = size; t > 0; t--)
	   {
		   for (n = 0; n < size - 1; n++)
		   {
			   if (array[n] > array[n + 1])
			   {
				   holder = array[n];
				   array[n] = array[n + 1];
				   array[n + 1] = holder;
				   print_array(array, size);
			   }
		   }
	   }
}    

