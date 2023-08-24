#include "main.h"
/**
  * isPrint - test ASCII table
  * @n: input
  * Return: 1 or 0
 */

int isPrint(int n)
{
	return (n >= 32 && n <= 126);
}

/**
  * printHexes - print value of string
  * @b: input
  * @start: input
  * @end: input
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
  * printASCII - print the value of ascii
  * @b: input
  * @start: input
  * @end: input
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrint(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
  * print_buffer - print a buffer
  * @b: input
  * @size: input
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start :  10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
