/* this function allocates memory for a 2 dimensional array */
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid-function that allocates amemory to 2-dime array
 * @width:number of arrays held by the 2-D array
 * @height:element that makes the subarrays
 * Return: pointer to the memory if success or NUll in failer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a;
	int b;


	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < width; a++)
	{
		grid[a] = malloc(height * sizeof(int));

		/*now each element of grid holds a pointer to a memory that*/
		/*can hold an array of size height*/

		if (grid[a] == NULL)
		{
			for (a = 0; a < width; a++)
			{
				free(grid[a]);
			}
			free(grid);
			return (NULL);
			}
		}
		for (b = 0; b < height; b++)
		{
			grid[a][b] = 0;
			/* keeping in mind that grid[a] is apointer */
			/* grid[a] can have index grid[a][b] which is value*/
			/* held by grid[a], so the above line assigned it to 0*/
		}
	}
	return (grid);
}
