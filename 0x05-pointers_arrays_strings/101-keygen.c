#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Return: always 0
 */

int main(void)
{
	int n;
	char c;

	srand(time(NULL));
	while (n <= 2658)
	{
		c = rand % 120;
		n += c;
		putchar(c);
	}
	putchar(2799 - num);
	return (0);
}
