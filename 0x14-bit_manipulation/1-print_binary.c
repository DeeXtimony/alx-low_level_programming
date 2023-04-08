#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @num: the number to print in binary
* Description: This function prints the binary representation of a given number
* Return: void
*/
void print_binary(unsigned long int num)
{
unsigned long int power = 2, bit = 0;
int i;
for (i = 0; power <= num && i < 62; i++)
{
	power = power << 1;
}

if (i != 62)
	power = power >> 1;

for (; power != 0; power = power >> 1)
{
	bit = num & power;

	switch (bit)
	{
		case 0:
			_putchar('0');
			break;

		case 1:
			_putchar('1');
			break;
	}
}
}
