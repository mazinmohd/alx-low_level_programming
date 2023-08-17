#include "main.h"

/**
  * _isdigit - test char if it digit
  * @c: input value
  * Return: 1 if it digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
