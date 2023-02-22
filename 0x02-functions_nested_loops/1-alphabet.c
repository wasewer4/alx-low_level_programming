#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
