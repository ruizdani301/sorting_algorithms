#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - check the code
 * @list:variable
 * Return: Always.
 */
void insertion_sort_list(listint_t **list)
{
	unsigned int cont = 0, conth = 0;
	listint_t *h_2 = NULL, *tmp = NULL;

	if (*list == NULL)
		return;
	h_2 = *list, tmp = *list;

	if (h_2->next == NULL)
		return;
	while (tmp != NULL)
	{
		tmp = tmp->next;
			if (tmp == NULL)
				return;
		cont = cont + 1, conth = cont, h_2 = tmp;
		while (h_2->n < h_2->prev->n)
		{
			if (conth == 1)
			{
				h_2->prev->next = h_2->next, h_2->prev->prev = h_2;
				h_2->next->prev = h_2->prev, h_2->next = h_2->prev;
				h_2->prev = NULL, *list = (*list)->prev;
			}
			else if (conth > 1 && h_2->next != NULL)
			{
				h_2->prev->next = h_2->next, h_2->next = h_2->prev;
				h_2->prev = h_2->prev->prev, h_2->prev->next = h_2;
				h_2->next->next->prev = h_2->next, h_2->next->prev = h_2;
			}
			else if (h_2->next == NULL)
				swap(h_2);
			print_list(*list), conth--;
			if (tmp == h_2)
				tmp = tmp->next;
			if (conth == 0)
				break;
		}

	}
}
/**
 * swap - check the code
 * @h_2:variable
 */
void swap(listint_t *h_2)
{
	h_2->next = h_2->prev, h_2->prev->next = NULL;
	h_2->prev = h_2->prev->prev, h_2->prev->next = h_2;
	h_2->next->prev = h_2;
}
