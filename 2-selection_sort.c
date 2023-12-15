#include "sort.h"

/**
 * selection_sort - sorts integer array in asc. order (Selection sort algo.)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum_idx, temp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum_idx])
				minimum_idx = j;
		}
		if (minimum_idx != i)
		{
			temp = array[minimum_idx];
			array[minimum_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
