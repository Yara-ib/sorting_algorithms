#include "sort.h"

/**
 * shell_sort - sorts integer array in asc. order (Shell sort - Knuth Sequence)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void shell_sort(int *array, size_t size)
{
	size_t i, gap = 1, temp = 0, check_swap = 1;
	int j;

	if (size < 2)
		return;

	gap = gap * 3 + 1;
	while (gap >= 1 && check_swap)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i - gap; j >= 0 ; j = j - gap)
			{
				check_swap = 0;
				if (array[j] > array[j + gap])
				{
					temp = array[j];
					array[j] = array[j + gap];
					array[j + gap] = temp;
					check_swap = 1;
				}
			}
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
