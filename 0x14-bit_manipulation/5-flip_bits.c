#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: bits
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int combine = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			combine++;
		m = m >> 1;
		n = n >> 1;
	}

	return (combine);

}
