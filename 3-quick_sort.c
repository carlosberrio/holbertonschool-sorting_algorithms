#include "sort.h"

/**
 * @ quick_sort
 * @ 
 * @param array 
 * @param size 
 * Return 
 */

void quick_sort(int *array, size_t size)
{
    sort_recursion(array, 0, size - 1, size);
}
void sort_recursion(int *array, int init, int final, size_t size)
{
    int p;

    if (init >= final || init < 0)
        return;
    p = partition(array, init, final, size);
    sort_recursion(array, init, p - 1, size);
    sort_recursion(array, p + 1, final, size);
}

int partition(int *array, int init, int final, size_t size)
{
    int pivot = array[final];
    int k, j;
    k = init - 1;
    for (j = init; j <= final - 1; j++)
    {
        if (array[j] <= pivot)
        {
            k = k + 1;
            swap(array, k, j, size);
        }
    }
    swap(array, k + 1, final, size);
    return k + 1;
}

void swap(int *array, int a, int b, size_t size)
{
    if (a != b)
    {
        int tmp = array[a];
        array[a] = array[b];
        array[b] = tmp;
        print_array(array, size);
    }
}
