#include "main.h"

/**
 * _puts_recursion - function will print a string, followed by a new line
 * @p: source string to print
 */
void _puts_recursion(char *p)
{
	if (*p == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*p);
	_puts_recursion(p + 1);
}
