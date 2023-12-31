#include "sort.h"

/**
 * shell_sort - sorts integer array in asc. order (Shell sort - Knuth Sequence)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void shell_sort(int *array, size_t size)
{
	size_t i, gap = 1, temp = 0;
	int j;

	if (size < 2)
		return;

	for (gap = 1; gap < size / 3; gap = 3 * gap + 1)
	;

	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i - gap; j >= 0 ; j -= gap)
			{
				if (array[j] > array[j + gap])
				{
					temp = array[j];
					array[j] = array[j + gap];
					array[j + gap] = temp;
				}
			}
		}
		print_array(array, size);
	}
}
