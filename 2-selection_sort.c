#include "sort.h"

/**
 * selction_sort - Function that sort an array of integers.
 *
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, indx;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (indx = i + 1; index < size; indx++)
			if (array[tmp] > array[indx])
			{
				tmp = indx;
				flag += 1
			}
	}
	swap = array[i];
	array[i] array[tmp];
	array[tmp] = swap;
	if (flag != 0)
		print_array(array, size);
}
