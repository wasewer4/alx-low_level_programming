#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest += *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (res);
}
