#include "main.h"

/**
 * string_toupper - change strings to uppercase
 * @s: an input string
 * Return: converted string
 */
char *string_toupper(char *s)
{
	char *st = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (st);
}
