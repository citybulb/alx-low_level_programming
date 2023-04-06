#include "main.h"
/**
 * _pow_recursion - Print a number race to n
 * @x: base number
 * @y: number for base x
 * Return: Pow value
*/

int _pow_recursion(int x, int y)
{

if (y < 0)
{

return (-1);

}

else if (y == 0)
{

return (1);

}

else if (y == 1)
{

return (x);

}

return (x = x * _pow_recursion(x, y - 1));

}
