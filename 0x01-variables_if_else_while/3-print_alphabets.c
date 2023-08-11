#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: program pritn all capital and small alphabet
  *
  * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
