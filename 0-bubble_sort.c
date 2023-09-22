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
 * bubble_sort - Sorts an array of integers in ascending
 *					order using Bubble Sort.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 *
 * This function sorts an array of integers in ascending
 * order using the Bubble Sort algorithm.
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int flag;

	for (int k = 0; k < size; k++)
	{
		flag = 0;
		for (int i = 0; i < size - k - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i + 1], &array[i]);
				flag = 1;
				/* Uncomment the next line if you want to print the array at each step */
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}






