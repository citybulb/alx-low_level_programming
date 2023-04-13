#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that finds the first instance of a char
 * @s: an input string to check
 * @c: an input character to check for
 * Return: returns pointer to c
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}
