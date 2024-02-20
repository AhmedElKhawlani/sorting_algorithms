#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int i, j, c, len;

    len = size;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                    {
                        c = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = c;
                        print_array(array, size);
                    }
            }
    }
}
