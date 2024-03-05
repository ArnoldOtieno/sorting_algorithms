#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - function that sorts an array
 * @array: pointer to the array to be sorted
 * @size: number of elements to be sorted
 * Return: returns nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	size_t j;
	size_t temp;
	bool swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				swap = true;
			}
		}
		len--;
		if (swap == false)
		{
			break;
		}
	}
}
