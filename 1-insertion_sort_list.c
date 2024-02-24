#include "sort.h"
/**
 * swab_node - function to swab 2 nodes
 * @x: is anode
 * @y: is a node
 * Return: void
*/
void swap_node(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	y->next = x;
	x->prev = y;
}
/**
 * insertion_sort_list - function to sort by selection
 * @list: is the head node
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swap_node(y->prev, y);
				if (!y->prev)
					*list = y;
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}
