#include <unistd.h>
#include main.h

/**
 * _putchar - function that prints char
 * @c: The character to print
 * char c - is a paramtere
 *
 * Return: returns 0
 * write used to print a character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
