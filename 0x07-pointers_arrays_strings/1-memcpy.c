#include "main.h"

/**
 * _memcpy - copys memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes n
 * Return: returns pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

char *temp = dest;

while (n--)
{
*dest = *src;
src++;
dest++;
}

return (temp);
}
