#include "main.h"
/**
  * _sqrt_recursion - natural square
  * @n: input value
  * Return: the natual square
 */

int squar(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (squar(n, x + 1));
	else
		return (-1);

}
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
