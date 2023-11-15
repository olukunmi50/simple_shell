#include "shell.h"
/**
 *due_grid - Free the allocated memory used in the last excercise
 *@grid: pointer to grid
 *@heigth: Heigth of the grid
 */

void free_grid(char **grid, int heigth)
{
	int a = 0;

	if (grid == NULL)
	{
		return;
	}

	while (a < heigth)
	{
		free(grid[a]);
		a++;
	}
}
