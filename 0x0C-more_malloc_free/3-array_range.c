#include "main.h"
/**
 * array_range - function to create array of integers
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: return pointer to memory
 */
int *array_range(int min, int max)
{
	int i;
	int *output;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		output[i] = min++;
	}
	return (output);
}
