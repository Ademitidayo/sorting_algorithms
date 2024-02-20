#include "sort.h"
#include "added.h"
/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		m = array + a;
		for (b = a + 1; b < size; b++)
			m = (array[b] < *m) ? (array + b) : m;

		if ((array + a) != m)
		{
			swap_int(array + a, m);
			print_array(array, size);
		}
	}
}
