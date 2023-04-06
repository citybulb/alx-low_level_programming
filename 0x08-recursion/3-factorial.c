/**
 * factorial - Print the factorial of any given number
 * @n: number to factorize
 * Return: factorial value
*/

int factorial(int n)
{

if (n == 1)

{

return (1);

}

else if (n < 0)

{

return (-1);

}

else

{

return (n * (factorial(n - 1)));

}

}