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
	int index;
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index +1] == '\0')
						return (haystack);
			         index++;
				} while (haystack[index] == needle[index]);
					}

					haystack++;
					}
					return ('\0');
}
