#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: program print all most alphabt
  *
  * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
