#include "main.h"
/**
  * *leet - encodes a string into 1337
  * @str: input value
  * Return: return string
 */

char *leet(char *str)
{
	char *ptr = str;
	char ch[] = {'A', 'E', 'O', 'T', 'L'};
	int nums[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < sizeof(ch) / sizeof(char); i++)
		{
			if (*str == ch[i] || *str == ch[i] + 32)
				*str = nums[i] + 48;
		}
		str++;
	}

	return (ptr);
}
