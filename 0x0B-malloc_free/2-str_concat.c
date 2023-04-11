#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates string 1 and 2
 *
 * @s1: source first string
 * @s2: source string 2
 *
 * Return: points to a newly allocated space
 * containing contents of @s1, and contents of @s2,
 * and null terminated.return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int g = 0;
	unsigned int h = 0;
	unsigned int s;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[g])
		g++;
	while (s2[h])
		h++;

	s = g + h;

	s3 = malloc(sizeof(char) * s + 1);
	if (s3 == NULL)
		return (NULL);

	while (i < g)
	{
		s3[i] = s1[i];
		i++;
	}

	while (i <= s)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
