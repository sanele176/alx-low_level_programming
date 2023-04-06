#include "main.h"

/**
 * _print_rev_recursion - function will print a string in reverse
 * @p: source string to print
 */
void _print_rev_recursion(char *p)
{
	if (*p)
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
