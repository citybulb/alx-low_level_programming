/**
 * _print_rev_recursion - Print the reverse of a string
 * @s: string character
 * Return: Nothing
*/
#include "main.h"

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{

_print_rev_recursion(s + 1);

_putchar(*s);
}

}