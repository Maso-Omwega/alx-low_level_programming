#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @m: The string to be printed.
 */
void _puts_recursion(char *m)
{
	if (*m)
	{
		_putchar(*m);
		_puts_recursion(m + 1);
	}
	else
		_putchar('\n');
}
