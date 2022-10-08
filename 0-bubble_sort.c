#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * 
 * @itm1: The first integer to swap.
 * @itm2: The second integer to swap.
 */
void swap_ints(int *itm1, int *itm2)
{
	int tmp;

	tmp = *itm1;
	*itm1 = *itm2;
	*itm2 = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 *
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool b = false;

	if (array == NULL || size < 2)
		return;

	while (b == false)
	{
		b = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				b = false;

			}
		}
		len--;
	}
}
