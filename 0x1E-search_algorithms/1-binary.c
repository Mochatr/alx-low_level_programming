#include "search_algos.h"
#include <stdio.h>

/**
 * display_array - Displays an array of integers
 * @array: The array to be displayed
 * @left: The first index of the array
 * @right: The last index of the array
 */
void display_array(const int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		printf("%d", array[left]);

		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * Using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 * Or -1 if value is not present in array
 * Or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		display_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
