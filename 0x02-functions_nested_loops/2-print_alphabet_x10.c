#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
