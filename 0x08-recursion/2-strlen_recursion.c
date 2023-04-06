#include "main.h"

/**
 * _strlen_recursion - fuction prints length of a string
 * @p: source string to calculate the length of
 *
 * Return: string length
 */
int _strlen_recursion(char *p)
{
	if (*p == '\0')
		return (0);
	return (1 + _strlen_recursion(p + 1));
}
