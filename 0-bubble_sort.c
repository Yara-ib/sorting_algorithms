#include "sort.h"

/**
 * bubble_sort - sorts integer array in ascending order (Bubble sort algorithm)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, check_swap, bubble_temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		check_swap = 0;
		for (j = 0; j < size - i - 1; j++)
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
		if (check_swap == 0)
			break;
	}
}
