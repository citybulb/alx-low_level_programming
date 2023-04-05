#include "main.h"

/**
 * _puts_recursion - prints a string followed by \n
 * @s: string to output
 * Return: Nothing
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
s++;
}

else
{
_putchar('\n');
return;
}

_puts_recursion(s);

}
