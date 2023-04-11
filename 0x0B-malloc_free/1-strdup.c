#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocated memory space
 * @str: source string to copy
 * Return: pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int g = 0;
	unsigned int h = 0;

	if (str == NULL)
		return (NULL);

	while (str[g])
		g++;

	arr = malloc(sizeof(char) * (g + 1));

	if (arr == NULL)
		return (NULL);

	while (str[h])
	{
		arr[h] = str[h];
		h++;
	}

	arr[h + 1] = 0;
	return (arr);
}
