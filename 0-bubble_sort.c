#include "sort.h"

/**
 * swap - Swap the 2 elements
 * @a: Element
 * @b: Element
 * Return: None
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: Array of ints to sort
 * @size: Size of array
 * Return: Sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len -1; i++)
		{
			if (array[i] > array(i +1))
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
