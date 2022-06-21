#include "sort.h"

/**
 * quick_sort - calls the recursion fucntion
 * @array: the array
 * @size: the size of the array
 * Return: the new array
 */

void quick_sort(int *array, size_t size)
{
	sort_recursion(array, 0, size - 1, size);
}

/**
 * sort_recursion - te recursion function
 * @array: the array
 * @init: the initi posistion of the array
 * @final: the final position of the array
 * @size: the lenght of the array
 */
void sort_recursion(int *array, int init, int final, size_t size)
{
	int p;

	if (init >= final || init < 0)
		return;
	p = partition(array, init, final, size);
	sort_recursion(array, init, p - 1, size);
	sort_recursion(array, p + 1, final, size);
}

/**
 * partition - divides the array into new arrays
 * @array: the array to be partioned
 * @init: the first posistion
 * @final: the last position
 * @size: the lenght of the array
 * Return: k+1
 */
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
	return (k + 1);
}

/**
 * swap - swaps two numbers
 * @array: the array
 * @a: the first number to be compare
 * @b: the second number to be compare
 * @size: the lenght of the array
 */
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

