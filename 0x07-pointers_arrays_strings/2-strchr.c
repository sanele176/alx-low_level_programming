#include "main.h"
/**
  * _strchr - find character in string
  * @s: src string
  * @c: character to find
  *
  * Return: tring from character found
  */
char *_strchr(char *s, char c)
{
	int g = 0, h;
	while (s[g])
	{
		g++;
	}

	for (h = 0; h <= g; h++)
	{
		if (c == s[h])
		{
			s += h;
			return (s);
		}
	}

	return ('\0');
}
