#include "sort.h"

/**
 * partition - Divides array into two partitions;
 * @array: Array to divide;
 * @lo: Lower index;
 * @hi: Higher index;
 * @size: Size of the array;
 * Return: The pivot index
*/

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j, c;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			c = array[i];
			array[i] = array[j];
			array[j] = c;
		}
	}
	i++;
	c = array[i];
	array[i] = array[hi];
	array[hi] = c;
	print_array(array, size);
	return (i);
}

/**
 * lomuto - Sorts an array using Lomuto partition scheme;
 * @array: Array to sort;
 * @lo: Lower index;
 * @hi: Higher index;
 * @size: Size of the array.
 */

void lomuto(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
		return;
	p = partition(array, lo, hi, size);
	lomuto(array, lo, p - 1, size);
	lomuto(array, p + 1, hi, size);
}

/**
 * quick_sort - Sorts an array of integers in ascending order,
 * using the quick sort algorithm;
 * @array: Array to sort;
 * @size: Size of the array.
*/

void quick_sort(int *array, size_t size)
{
	int lo, hi;

	lo = 0;
	hi = size - 1;
	lomuto(array, lo, hi, size);
}
