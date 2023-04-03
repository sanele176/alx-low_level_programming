#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function finds a substring.
 * @haystack: source string to search from
 * @needle: source string to look into string haystack
 * Return:  pointer to the start of the found substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *beginn = needle, *begint = haystack;

	while (*haystack)
	{
		begint = haystack;
		needle = beginn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = begint + 1;
	}
	return (NULL);
}
