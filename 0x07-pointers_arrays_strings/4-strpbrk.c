#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  function looks for a string for any of a set of bytes.
 * @s: source string
 * @accept: source character look into string s
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *b = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = b;
		s++;
	}
	return (NULL);
}
