#include "main.h"

/**
 * _strstr -  a function that finds a substring.
 * @haystack: source string to look in
 * @needle: source string to look into string haystack
 * Return:  a pointer to the beginning of the found substring,
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
