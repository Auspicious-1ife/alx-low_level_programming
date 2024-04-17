#include "main.h"
/**
 * is _prime_number - says if an integer is a prime number or not
 * is _primr_helper - determine whether a number is prime.
 * @n: number to evaluate
 * Helper function to check if a number is prime
 *  Returns: 1 if the number is prime, 0 otherwise
 *  Function to check if a number is prime
 * Returns: 1 if the number is prime, 0 otherwise
 */

int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, 2));
}
int is_prime_helper(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}
