#include "main.h"

/**
 * _strspn - function that finds the length of a prefix substring.
 * @s: source string
 * @accept: source character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, f;
	char *b = accept;

	while (*s)
	{
		f = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				a++;
				f = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = b;
		if (f == 0)
			break;
	}
	return (a);
}
