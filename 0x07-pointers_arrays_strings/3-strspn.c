#include "main.h"

/**
 * _strspn - a function that gets the count of a prefix substring.
 * @s: an input string
 * @accept: an input char
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
char *p;
char *a;
int count = 0;

for (i = s; *i != '\0'; i++)
{
for (a = accept; *a != '\0'; a++) 
{

if (*i == *a)
{
count++;
break;
}
}

if (*a == '\0') 
{
return (count);
}
}
    
return (count);

}
