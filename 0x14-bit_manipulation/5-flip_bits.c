#include "main.h"
/**
 * flip_bits - count the number of bits you need to flip
 * @n: firs number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, bit_num = 0;

	while (XOR > 0)
	{
		bit_num += (XOR & 1);
		XOR >>= 1;
	}

	return (bit_num);
}
