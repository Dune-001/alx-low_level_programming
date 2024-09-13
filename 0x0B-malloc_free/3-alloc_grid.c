#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - 2d array
 * @width: rows
 * @height: array
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	**grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			for(l = 0; l < k; l++)
			{
				free(grid[l]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[k][l] = 0;
		}
	}
	return (grid);
}
