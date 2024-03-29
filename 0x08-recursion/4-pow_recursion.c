#include "main.h"

/**
 * _pow_recursion - raise base integer to the power of following integer
 * @x: base number
 * @y: power
 * Return: result of computation
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else if (y == 0)
		return (1);

	else
		return (-1);

	return (0);
}
