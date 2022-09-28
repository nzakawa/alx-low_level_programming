#include "main.h"

/**
 * evaluate_number - evaluate if the number is prime
 *@n: integer
 *@m: prime number
 * Return: 1 if prime, 0 if not
 */
int evaluate_number(int n, int m)
{
	if (m < 2 || m % n == 0)
		return (0);
	else if (n > m / 2)
		return (1);
	else
		return (evaluate_number(n + 1, m));
}

/**
 * is_prime_number - indicates if the number is prime
 * @n: integer
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (evaluate_number(2, n));
}

