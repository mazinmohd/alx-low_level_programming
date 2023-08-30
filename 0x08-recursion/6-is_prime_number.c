#include "main.h"
/**
  * check_prime - test the number
  * @n: input
  * @x: input
  * Return: the answer
 */

int check_prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, x + 1));
}
/**
  * is_prime_number - return the value of 1 or 0
  * @n: input
  * Return: the 1 or 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


