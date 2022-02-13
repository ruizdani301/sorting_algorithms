#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - check the code
 * @array:variable
 * @size: Variable
 * Return: Always 0.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int j, i, tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
