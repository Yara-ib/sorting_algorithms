#include "sort.h"

/**
 * quick_sort - sorts integer array in asc. order (Quick sort algo.)
 * @array: array of unsorted integers.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sorting(array, 0, size - 1, size);
}

/**
 * quick_sorting - recursion function to keep sorting the sub-arrays.
 * @array: array of unsorted integers.
 * @lower_bound: the index of the smallest integer.
 * @upper_bound: the index of the largest to be integer.
 * @size: size of array.
 * Return: sorted integer saved || returns nothing.
*/

void quick_sorting(int *array, int lower_bound, int upper_bound, size_t size)
{
	int pivot;

	if (lower_bound < upper_bound)
	{
		pivot = divide_conquer(array, lower_bound, upper_bound, size);
		quick_sorting(array, lower_bound, pivot - 1, size);
		quick_sorting(array, pivot + 1, upper_bound, size);
	}
}

/**
 * conquer_divide - divides and sort in place the array in the sub-arrays.
 * @array: array of unsorted integers.
 * @lower_bound: the index of the smallest integer.
 * @upper_bound: the index of the largest to be integer.
 * @size: size of array.
 * Return: the pivot's index.
*/

int divide_conquer(int *array, int lower_bound, int upper_bound, size_t size)
{
	int backward_idx, forward_idx, temp_value, pivot;

	pivot = array[upper_bound];
	backward_idx = lower_bound - 1;

	for (forward_idx = lower_bound; forward_idx <= upper_bound; forward_idx++)
	{
		if (array[forward_idx] <= pivot)
		{
			backward_idx++;
			if (backward_idx != forward_idx)
			{
				temp_value = array[backward_idx];
				array[backward_idx] = array[forward_idx];
				array[forward_idx] = temp_value;
				print_array(array, size);
			}
		}
	}
	return (backward_idx);
}
