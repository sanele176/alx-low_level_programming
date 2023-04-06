#include "main.h"
/**
 * find_root - calculates p**p to check with m.
 * @m: source number.
 * @p: iteration number.
 * Return: iteration number
 */
int find_root(int m, int p)
{
	if (p * p == m)
		return (p);
	if (p * p <= m)
		return (find_root(m, p + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - finds square root of m.
 * @m: source number.
 *
 * Return: square root
 */
int _sqrt_recursion(int m)
{
	if (m < 0)
		return (-1);
	if (m == 0 || m == 1)
		return (m);
	return (find_root(m, 2));
}
