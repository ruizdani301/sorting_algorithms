#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - check the code
 * @array:variable
 * @size: Variable
 * Return: Always.
 */

void selection_sort(int *array, size_t size)
{
	unsigned int j, i, tmp, new_menor;

	for (i = 0; i < size; i++)
	{
		new_menor = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[new_menor])
			{
				new_menor = j;
			}
		}
	tmp = array[i];
	array[i] = array[new_menor];
	array[new_menor] = tmp;
	if (array[i] != array[new_menor])
	{
		print_array(array, size);
	}
	}
}
