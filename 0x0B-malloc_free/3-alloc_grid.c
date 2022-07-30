#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure or if width
 * or height is > or = 0, else a 2d array filled with 0
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	while (h < height)
	{
		arr[h] = malloc(sizeof(int) * width);
		if (arr[h] == NULL)
			return (NULL);
		h++;
	}

	h = 0;

	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			arr[h][w] = 0;
			w++;
		}
		h++;
	}

	return (arr);
}

