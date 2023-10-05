#include "main.h"
/**
 * alloc_grid - create two dimensional array
 * @width: parameter representing columns
 * @height: parameter representing rows
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = (int **)malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = (int *)malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(result[j]);
			}
			free(result);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			result[i][j] = 0;

	return (result);
}
