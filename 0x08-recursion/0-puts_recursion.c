#include "main.h"
/**
 * _puts_recursion - function similar to puts
 * @s: char pointer to print using recursion
 * Return: return newline if string has reached end
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (*s == '\0')
		_putchar('\n');
}
