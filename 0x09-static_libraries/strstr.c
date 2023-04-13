#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function to find a substring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: Haystack else NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *begin = needle, *temp_hay = haystack;

while (*haystack)
{
temp_hay = haystack;
needle = begin;
while (*haystack == *needle)
{
haystack++;
needle++;
}

if (*needle == '\0')
return (haystack);
haystack = temp_hay + 1;
}
return (NULL);
}
