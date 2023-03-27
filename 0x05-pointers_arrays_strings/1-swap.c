#include <stdio.h>
#include "main.h"

/**
 * swap_int - check the code
 *@a: Hold temporary value of a
 *@b: Hold temporary value of b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int a_temp = *a;
int b_temp = *b;
*a = b_temp;
*b = a_temp;
}
