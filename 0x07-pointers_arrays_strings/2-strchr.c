#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that finds a character in a string.
 * @s: an source string to find in
 * @c: an source character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
