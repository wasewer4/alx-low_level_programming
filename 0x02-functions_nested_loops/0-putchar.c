#include <unistd.h>
/**
 * function that prints char
 *
 * char c - is a paramtere
 *
 * write used to print a character
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
