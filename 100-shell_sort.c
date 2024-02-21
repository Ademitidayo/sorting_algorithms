#include "sort.h"
#include "added.h"

/**
 * shell_sort - Sort an array of integers in ascending order using the shell
 * sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, a, b;

	if (array == NULL || size < 2)
		return;

	for (interval = 1; interval < size / 3;)
		interval = interval * 3 + 1;

	for (; interval >= 1; interval /= 3) 
	{
		for (a = interval; a < size; a++) 
		{
			for (b = a; b >= interval && array[b - interval] > array[b]; b -= interval)
				swap_int(&array[b], &array[b - interval]);
		}
		print_array(array, size);
	}
}
