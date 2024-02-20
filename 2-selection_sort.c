#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order,
 * using the Selection sort algorithm;
 * @array: Array to sort;
 * @size: Size of the array to sort.
*/

void selection_sort(int *array, size_t size)
{
    int i, j, c, len, k;

    len = size;
    for (i = 0; i < len - 1; i++)
    {
        k = i;
        for (j = i + 1; j < len; j++)
        {
            if (array[j] < array[k])
                k = j;
        }
        if (k != i)
        {
            c = array[k];
            array[k] = array[i];
            array[i] = c;
            print_array(array, size);
        }
    }
}
