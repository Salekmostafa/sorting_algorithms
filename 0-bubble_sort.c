#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - This function sorts an array of integers in ascending order
 * @array: The array of integers to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;

    if (!array || size == 0)
        return;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
            }
        }
    }
}

