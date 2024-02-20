#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	int swapped;
	
	for (i = 0; i < size - 1; i++) 
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++) 
		{
			if (array[j] > array[j + 1]) 
			{
				swap_int(&array[j], &array[j + 1]);
				swapped = 1;
				printf(" ");
				for (k = 0; k < size; k++) 
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
		if (!swapped) 
		{
			break;
		}
	}
}
