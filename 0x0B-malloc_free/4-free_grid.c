#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this fanction concatenate two strings
 * @grid: 2 dimentional array to free
 * @height height
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
