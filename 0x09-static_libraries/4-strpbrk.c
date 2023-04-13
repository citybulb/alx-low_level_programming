#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  checks a string for any number of bytes.
 * @s: an input character
 * @accept: an input character
 * Return:  a pointer to s or NULL is string not found
 */
char *_strpbrk(char *s, char *accept)
{
char *temp = accept;

while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}

accept = temp;
s++;
}
return (NULL);
}
