#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: parameter
 * @height: parameter
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i,j;

	ptr = (int *) malloc(width * height * sizeof(int));
	if (width <= 0 || height <= 0)
	[
		return (NULL);
	]
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)

	}
}
