#include "main.h"

int actual_prime(int n, int i);

/**
 *is_prime_number - say if a number is a prime number of not
 *@n: the number to evaluate
 *Return: 1 if number is prine or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (1);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: the number to evaluate
 * @i: interator
 * Return: 1 if number is prime or 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
