#include "sort.h"

/**
 * bubble_sort - sorts integer array in ascending order (Bubble sort algorithm)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void bubble_sort(int *array, size_t size)
{
	size_t j, check_swap = 1, bubble_temp = 0;

	if (size < 2)
		return;

	while (check_swap)
	{
		check_swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				bubble_temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = bubble_temp;
				print_array(array, size);
				check_swap = 1;
			}
		}
	}
}
