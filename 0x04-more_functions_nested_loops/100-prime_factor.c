#include <stdio.h>

/**
  * _sqrt - find square root
  * @x: input value
  * Return: the square of root
 */

double _sqrt(double x)
{
	float a, b;

	a = x / 2;
	b = 0;

	while (a != b)
	{
		b = a;
		a = (x / b + a) / 2;
	}
	return (a);
}

/**
  * largest_factor - find largest prime factor
  * @n: input value
 */

void largest_factor(long int n)
{
	int pr, lg;

	while (n % 2 == 0)
		n = n / 2;

	for (pr = 3; pr <= _sqrt(n); pr += 2)
	{
		while (n % pr == 0)
		{
			n = n / pr;
			lg = pr;
		}
	}
	if (n > 2)
		lg = n;
	printf("%d\n", lg);
}

/**
  * main - Entry point
  * Return: Always 0
 */

int main(void)
{
	largest_factor(612852475143);

	return (0);
}
