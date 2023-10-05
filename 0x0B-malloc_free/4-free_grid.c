#include "main.h"
/**
 * free_grid - function to free memory
 * @grid: pointer for the array
 * @height: representing number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
