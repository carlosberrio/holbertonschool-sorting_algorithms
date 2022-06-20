#include "sort.h"

/**
 * selection_sort -  function that sorts an array of
 * integers in ascending order using
 * the Selection sort algorithm
 * @array: the array
 * @size: array size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
            swap = array[i];
            k = i;
            for (j = i; j < size; j++)
		    {
                if (array[j] < swap)
			    {
                    k = j;
                    swap = array[j];
                }
            }
            if (k != i)
            {
                array[i] += array[k];
                array[k] = array[i] - array[k];
			    array[i] -= array[k];
			    print_array(array, size);
		    }
	}
}
