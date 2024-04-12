#include "sort.h"

/**
* swap_ints - swap two integers in an array
* @a: the first integer to swap
* @b: the second interger to swap
*/
void swap_ints(int *a, int *b)
{
    inttmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/**
* selection_sort - sort an array of integers in ascending order using the shell sort algorithm
*@array: an array of integers
*@size: the size of the array

description: uses the knuth interval sequence
*/
void shell_sort(int *array, size_t size)
{
    size_t gap, i,j;

    if(array == NULL || size < 2)
    
}
