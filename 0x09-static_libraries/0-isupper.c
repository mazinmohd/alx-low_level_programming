#include "main.h"

/**
  * _isupper - test charcter is upper or not
  * @c: input value
  * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
