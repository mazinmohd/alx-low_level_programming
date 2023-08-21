#include "main.h"

/**
  * swap_int - function swap two variable
  * @*a: input value
  * @*b: input vlaue
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
