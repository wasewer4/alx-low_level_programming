#include "main.h"
/**
 * @brief _strcat - concat 2 string
 *
 * @param dest:char
 * @param src:char
 * @return char*
 */
char *_strcat(char *dest, char *src)
{
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

	return dest;
}