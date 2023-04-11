#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of chars and initializes it with a char
 * @size: array size
 * @c: character to be initialize
 * Return: pointer to the array, or NULL if it fails
**/

char *create_array(unsigned int size, char c)
{
	unsigned int g;
	char *h;

	h = malloc(sizeof(char) * size);
	if (size == 0 || h == NULL)
		return (NULL);

	g = 0;
	while (g < size)
	{
		h[g] = c;
		g++;
	}

	return (h);
}
