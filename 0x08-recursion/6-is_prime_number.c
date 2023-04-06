/**
 * is_prime_number - Print a number race to n
 * @n: number to check if it is a prime number
 * Return: 0 or 1
*/

int is_prime_number(int n)
{

if (n == 1 || n == -1 || n % 5 == 0)
{

return (0);

}

else if (n % 2 != 0)

{

return (1);

}

else if (n % 1 == 0 && n % n == 0)
{

return (0);

}

is_prime_number(n);

}
