#include "main.h"

/**
 * is_palindrome - check if a given string is a palindrome
 * @s: string to be checked
 * Return: 1 if true; 0 otherwise
 */

char *fwd(char *s);
char *bck(char *s);

int is_palindrome(char *s)
{
	char *fwd_str = fwd(s);
	char *bck_str = bck(s);

	if (strcmp(fwd_str, bck_str) == 0)
	{
		return (1);
	}

	return (0);
}

char *fwd(char *s)
{
	int len = strlen(s);
	char *result = malloc(len + 1);

	for (int i = 0; i < len; i++)
	{
		result[i] = s[i];
	}

	result[len] = '\0';

	return (result);
}

char *bck(char *s)
{
	int len = strlen(s);
	char *result = malloc(len + 1);


	for (int i = 0; i < len; i++)
	{
		result[i] = s[len - i - 1];
	}

	result[len] = '\0';

	return (result);
}
