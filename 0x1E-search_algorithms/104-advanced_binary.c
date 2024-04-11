#include "search_algos.h"

/**
  * advanced_binary_recursive - Recursive search for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search
  * @left: Starting index of the [sub]array to search
  * @right: Ending index of the [sub]array to search
  * @value: Value to search for
  *
  * Return: return NULL if not found
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (idx = left; idx < right; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);

	idx = left + (right - left) / 2;
	if (array[idx] == value && (idx == left || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (advanced_binary_recursive(array, left, idx, value));
	return (advanced_binary_recursive(array, idx + 1, right, value));
}

/**
  * advanced_binary - Advanced binary search on a sorted array
  * @array: Pointer to the first element of the array to search
  * @size: Number of elements in the array
  * @value: Value to search for
  *
  * Return: return NULL if not found
  *
  * Description: Prints the [sub]array
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
