#include "main.h"

/**
 * free_gird - frees a 2 dimentional grid created by malloc
 *
 * @grid: the 2d array
 * @height:the height of the grid
 */

void free_gird(int **gird, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
