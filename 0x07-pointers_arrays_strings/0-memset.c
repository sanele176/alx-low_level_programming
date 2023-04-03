#include "main.h"

/**
 * _memset - function populates memory with constant bytes
 * @s: source to populate
 * @b: char to populate location with
 * @n: number of bytes to populate
 * Return: returns pointer to location populated
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (begin);
}
