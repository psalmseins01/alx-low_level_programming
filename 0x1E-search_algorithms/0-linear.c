#include "search_algos.h"

/**
  * linear_search - Search for a given value
  * @array: A pointer to the first element of the array
  * @size: Size of the array
  * @value: Value to search
  * Return: return value or NULL if not found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
