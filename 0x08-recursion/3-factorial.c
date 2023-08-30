#include "main.h"
/**
  * factorial - the factorial of a given number
  * @n: input value
  * Return: the value of factorial
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}


