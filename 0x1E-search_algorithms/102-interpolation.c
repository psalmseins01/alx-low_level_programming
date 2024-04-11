#include "search_algos.h"

/**
  * interpolation_search - Search for a value in a sorted array
  *                        of integers using interpolation search
  * @array: A pointer to the first element of the array
  * @size: Number of elements in array
  * @value: Value to search for
  * Return: return -1 or the index the number was found
  * Description: Prints a value every time it is compared in the array
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t num, j, i;

	if (array == NULL)
		return (-1);

	for (i = 0, num = size - 1; num >= i;)
	{
		j = i + (((double)(num - i) / (array[num] - array[i])) * (value - array[i]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			num = j - 1;
		else
			i = j + 1;
	}

	return (-1);
}
