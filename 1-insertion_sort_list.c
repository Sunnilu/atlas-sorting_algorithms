#include "sort.h"

/**
* insertion_sort_list - sort a given array using insertion
* sort algorithm in asending order
* @list: the list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL, *unsorted = NULL, *temp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;
	unsorted = (*list)->next; 
	while (unsorted != NULL)
	{
		sorted = unsorted->prev;
		temp = unsorted->next;
		while (sorted != NULL)
		{
			if (unsorted->n < sorted->n)
			{
				sorted = sorted->prev;
				if (unsorted->next != NULL)
				{
					unsorted->next->prev = 
					unsorted->prev;
				}
				unsorted->prev->next = unsorted->next;
				unsorted->prev = sorted;
				if (sorted == NULL)
				{
					(*list)->prev = unsorted;
					unsorted->next = *list;
					*list = unsorted;
				}
				else
				{
					sorted->next->prev = unsorted;
					unsorted->next = sorted->next;
					sorted->next = unsorted;
				}
				print_list(*list);
			}
			else
				break;
		}
		unsorted = temp;
	}
}

