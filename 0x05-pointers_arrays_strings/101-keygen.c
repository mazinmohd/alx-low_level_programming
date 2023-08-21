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
	while (n <= 2645)
	{
		c = rand() % 128;
		n += c;
		putchar(c);
	}
	putchar(2772 - n);
	return (0);
}
