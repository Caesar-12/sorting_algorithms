#include "sort.h"

/**
 * bubble_sort - Sorts integers in ascending order
 *
 * @array: Array to sort
 * @size: Size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t trav, trav2;

	for (trav = 0; trav < size; trav++)
	{
		for (trav2 = 0; trav2 < size - 1; trav2++)
		{
			if (array[trav2] > array[trav2 + 1])
			{
				swap = array[trav2];
				array[trav2] = array[trav2 + 1];
				array[trav2 + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
