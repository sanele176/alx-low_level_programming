#include <stdio.h>
#include<stdlib.h>

/**
 * free_grid - free memory from grid function
 * @grid: grid to be freed
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
