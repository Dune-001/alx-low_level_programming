#include <stdlib.h>
#include "main.h"
/**
 * free_grid - clear memory used
 * @grid: 2d array
 * @height: height of array
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
	{
		return;
	}
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
