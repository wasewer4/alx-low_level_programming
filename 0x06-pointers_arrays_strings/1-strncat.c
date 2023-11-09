#include "main.h"
#include <stdio.h>
/**
 * _strncat - concat 2 string use at most n bytes from src
 *
 * @n: int
 * @dest: char
 * @src: char
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
