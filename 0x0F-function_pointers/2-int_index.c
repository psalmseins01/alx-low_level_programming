#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: array to search integer from
 * @size: size of an array
 * @cmp: function pointer
 * Return: return matched i  or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
