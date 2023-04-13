#include "main.h"

/**
 * _strncpy - copys the strings.
 * @dest: an input
 * @src: an input
 * @n: an input integer
 * Return: Resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
