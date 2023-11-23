#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: character array string type
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
