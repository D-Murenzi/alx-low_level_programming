/* this function free memory that was previously reserved by alloc_grid func*/
#include <stdlib.h>
#include "main.h"
/**
 * free_grid-function that releases all memory that was previously reserved
 * @grid:pointer to the reserved memory
 * @height:being the number of elements in each sub array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
	{
		return;
	}
	for (a = 0; a < height; a++)
	{
		if (grid[a] != NULL)
		{
			free(grid[a]);
		}
	}
	free(grid);
	return;

}
