#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: element to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a, b;

	if (size < 2)
		return;

	for (a = 0; a < size; a++)
	{
		unsigned int x = a;
		int aux = array[a];

		for (b = a + 1; b < size; b++)
		{
			if (array[b] < aux)
				aux = array[b], x = b;
		}
		if (x != a)
		{
			array[x] = array[a];
			array[a] = aux;
			print_array(array, size);
		}
	}
}
