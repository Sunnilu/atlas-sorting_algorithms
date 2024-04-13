#include "sort.h"

/**
* swap_nodes - swap two nodes in a lisint_t doubly-linked list
* @h: a pointer to the head of the doubly-linked list
* @n1: a pointer to the first node to swap
* @n2: the second node to swap
*/
void swap_nodes(listint_t **h,listint_t **n1, listint_t *n2)
{
    (*n1)->next = n2->next;
    if (n2->next != NULL)
        n2->next->prev = *n1;
    n2->prev = (*n1)->prev;
    n2->next = *n1;

    if ((*n1)->prev != NULL)
        (*n1)->prev->next = n2;

    else
        *h = n2;

    (*n1)->prev = n2;
    *n1 = n2->prev;
}
/**
* insertion_sort_list - sorts a doubly linked list of integers using the insertion sort algorithm
* @list: a pointer to the head of a doubly linked list of integers
* description: prints the list after each swap
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp;
    int n;

    if (!list)
	    return;
    tmp = *list;
    while (tmp)
    {
	if (tmp->next)
    	{
		if (tmp->n > tmp->next->n)
		{
			n = tmp->n;
			*(int *)&tmp->n = tmp->next->n;
			*(int *)&tmp->next->n = n;
			tmp = *list;
			print_list(*list);
			break;
		}
	}
	tmp = tmp->next;
     }
}    
