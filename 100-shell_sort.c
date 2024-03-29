#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *e, int *d)
{
	int tmp;

	tmp = *e;
	*e = *d;
	*d = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, f, h;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (f = gap; f < size; f++)
		{
			h = f;
			while (h >= gap && array[h - gap] > array[h])
			{
				swap_ints(array + h, array + (h - gap));
				h -= gap;
			}
		}
		print_array(array, size);
	}
}
