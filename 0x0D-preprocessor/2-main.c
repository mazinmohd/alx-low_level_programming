#include <stdio.h>
/**
  * main - program prints the name of the file it was compiled from
  * Return: 0 Always sucess
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
