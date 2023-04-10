#include "main.h"
/**
 * _puts - test if a number is greater than 0
 * @str: number to be checked
 */
void _puts(char *str)
{
	int g;

	for (g = 0; *str != '\0'; g++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
