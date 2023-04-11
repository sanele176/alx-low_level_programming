#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: grid Width
 * @height: grid height
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int g;
	int h;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		arr[g] = malloc(sizeof(int) * width);
		if (arr[g] == NULL)
		{
			while (g >= 0)
			{
				free(arr[g]);
				g--;
			}
			free(arr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (k = 0; k < width; k++)
			arr[h][k] = 0;
	}
	return (arr);
}
