#include "sort.h"

/**
 * bubble_sort - sorts by comparison of 2, at a time
 * @array: array input
 * @size: size of the lengt areay
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
    int ordered = 1;
    size_t k;

    if (size < 2)
        return;

    while (ordered == 1)
    {
        ordered = 0;
        for (k = 0; k < size - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                array[k] += array[k + 1];
                array[k + 1] = array[k] - array[k + 1];
                array[k] -= array[k + 1];
                print_array(array, size);
                ordered = 1;
            }
        }
    }
}
