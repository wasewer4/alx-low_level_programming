#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
