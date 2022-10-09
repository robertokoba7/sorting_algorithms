#include "sort.h"

/**
 * swap - the position of two elems.
 *
 * @array: array
 * @itm1: array elem
 * @itm2: array elem
 */
void swap(int *array, ssize_t itm1, ssize_t itm2)
{
	int tmp;

	tmp = array[itm1];
	array[itm1] = array[itm2];
	array[itm2] = tmp;
}

/**
 * lomuto_partition - this sort scheme implementation
 *
 * @first: First array elem
 * @last: last array elem
 * @size: array size
 * Return: postn of last elem sorted
 */
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = arra[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finde])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
		}
		current++;
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current);
}

/**
 * qs - quicksort algorithm implementation
 *
 * @array: array
 * @first: first aary elems
 * @last: last array elem
 * @size: array size
 */
void qs(int *array, ssize_t first, ssize_t last)
{
	ssize_t position = 0;

	if (first < last)
	{
		position = lomuto_partition(array, first, last, size);

		qs(array, first, position - 1, size);
		qs(array, position + 1, last, size);
	}
}

/**
 * quick-sort - prepare the terrain to quicksort algorithm
 *
 * @array: array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
