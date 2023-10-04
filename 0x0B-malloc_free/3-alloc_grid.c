#include <stdlib.h>
/**
 * alloc_grid - returns a 2d array
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid, *ptr, i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc((width * height * sizeof(int)) + (height * sizeof(int)));
	ptr = (int*) (grid + height);
	for(i = 0; i < height; i++)
	{
		grid[i] = (ptr + width * i);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
