#include "main.h"

int check_prime(int num, int rem);

/**
 * is_prime_number - function that checks if number is prime
 * @n: an input integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int rem = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (check_prime(n, rem));
}

/**
 * check_prime - check if number can be divided
 * @num: the number to be checked
 * @rem: result
 * Return: 1 or 0
 */
int check_prime(int num, int rem)
{
	if (num % rem == 0)
		return (0);

	if (rem == num / 2)
		return (1);

	return (check_prime(num, rem + 1));
}
