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
	/* outer loop; checks the min value index & re-sort the array if needed */
	{
		/* Assume min to be @the beginning of the array.*/
		minimum_idx = i;
		/* Inner loop to get min value & its index */
		/* i + 1; to avoid unneeded checks for elements in the sorted sub-array */
		for (j = i + 1; j < size; j++)
		{
			/* Comparing rest of the array's with the assumed to be min value @i*/
			if (array[j] < array[minimum_idx])
				minimum_idx = j;
		}
		/* Now, let's add it @ the right position */
		if (minimum_idx != i)
		/* If so; then it's not @the correct order, will need to sort it */
		{
			/* swap >> idx with i */
			temp = array[minimum_idx];
			array[minimum_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
