#include "main.h"

/**
  * _strstr - function finds a substring
  * @haystack: the string to look in
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int g = 0, h = 0;
	while (haystack[g])
	{
		while (needle[h])
		{
			if (haystack[g + h] != needle[h])
			{
				break;
			}

			h++;
		}

		if (needle[h] == '\0')
		{
			return (haystack + g);
		}

		g++;
	}

	return ('\0');
}
