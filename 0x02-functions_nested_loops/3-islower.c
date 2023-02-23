#include "main.h"
/**
 * _islower - checks for a lowercase character
 * @c: is function parameter
 * Return: 1 if charater passed is lowercase or 0
 */

int _islower(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
			return (1);
		}
	}
	return (0);
}
