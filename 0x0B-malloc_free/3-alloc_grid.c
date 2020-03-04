#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - function to allocate memory to build grid
 * @width: width of grid
 * @height: height of grid
 * Return: grid of 0s
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr; /*double*/

	if (width <= 0 || height <= 0)/* return null if w||h <= 0*/
	{
		return  (NULL);
	}
	ptr = malloc(height * sizeof(int *));/*alloc space for height */
	if (ptr == NULL)
	{
		return (NULL); /*if alloc fails return NULL*/
	}
	for (x = 0; x < height; x++) /*alloc space for cols */
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL) /* if alloc fails */
		{
			for (y = 0; y < x;  y++)/* free the rows      */
				free(ptr[y]);   /*you already alloced */
			free(ptr);/*free columnless pointer*/
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;/*initialize grid at zero*/
		}
	}
	return (ptr);
}
