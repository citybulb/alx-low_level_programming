
#include "main.h"

/**
 * _strspn - a function that gets the count of a prefix substring.
 * @s: an input string
 * @accept: an input char
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, res;
char *temp = accept;

while (*s)
{
res = 0;
while (*accept)
{
if (*accept == *s)
{
i++;
res = 1;
break;
}
accept++;
}
s++;
accept = temp;
if (res == 0)
break;
}
return (i);
}
