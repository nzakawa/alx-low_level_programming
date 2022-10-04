#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 *  by your alloc_grid function
 *
 *  @grid: The 2D array to free memory from
 *  @height: The height of the 2D array
 *  Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	j = 0;
	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
