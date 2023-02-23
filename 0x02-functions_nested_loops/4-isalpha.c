#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase or otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
