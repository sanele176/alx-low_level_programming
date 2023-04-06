#include "main.h"

/**
 * factorial - function to get the factorial of a number
 * @p: source number to return the factorial from
 *
 * Return: factorial of source number
 */
int factorial(int p)
{
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (p * factorial(p - 1));
}
