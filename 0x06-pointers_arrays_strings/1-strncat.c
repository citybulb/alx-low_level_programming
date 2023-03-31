#include "main.h"

/**
 * _strncat - function that joins 2 strings.
 * @dest: an input
 * @src: an input
 * @n: an integer
 * Return: The resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
