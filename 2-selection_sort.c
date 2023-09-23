#include "sort.h"
/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers pointed to by 'a' and 'b'.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - Sorts an array of integers in ascending
 *					order using Selection Sort.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 *
 * This function sorts an array of integers in ascending
 * order using the Selection Sort algorithm.
 */
void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
	for (j = i + 1 ; j < size; j++)
	{
		if (array[j] < array[min])
		{
			min = j;
		}
	}
	swap(&array[i], &array[min]);
	print_array(array, size);
	}
}
