#include "sort.h"

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
	size_t i, inx, tmp = 0, n = size;

	if (n < 2)
		return;
	for (i = 0; i < n; i++)
		for (inx = 0; inx < n; inx++)
		{
			if (array[inx] > array[inx + 1] && array[inx + 1])
			{
				tmp = array[inx + 1];
				array[inx] = array[inx + 1];
				arrat[inx + 1] = tmp;
				print_array(array, n);
			}
		}
}
