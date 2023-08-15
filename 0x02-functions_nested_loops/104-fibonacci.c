#include <stdio.h>

/**
  * num_length - return the length of string
  *
  * @n: operater number
  *
  * Return: number of digits
 */

int num_length(int n)
{
	int len = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len += 1;
	}
	return (len);
}

/**
  * main - Entry point
  *
  * Return: Always 0
 */

int main(void)
{
	int co, ini;
	unsigned long f1 = 1, f2 = 2, max = 100000000, f3 = 0, f4 = 0, s, sa = 0;

	for (co = 1; co <= 98; co++)
	{
		if (f3 > 0)
			printf("%lu", f3);
		ini = num_length(max) - 1 - num_length(f1);
		while (f3 > 0 && ini > 0)
		{
			printf("%d", 0);
			ini--;
		}
		printf("%lu", f1);
		s = (f1 + f2) % max;
		sa = f3 + f4 + (f1 + f2) / max;
		f1 = f2;
		f3 = f4;
		f2 = s;
		f4 = sa;
		if (co != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
