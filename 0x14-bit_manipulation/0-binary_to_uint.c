#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned integer.
* @b: A pointer to the string containing the binary number.
* Return: The converted number, or 0 if b is NULL or if the string contains
* characters other than '0' and '1'.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int a, ba = 0;

	if (b == NULL)
		return (0);

	while (b[ba] != '\0')
	{
		if (b[ba] != '0' && b[ba] != '1')
			return (0);
	ba++;
	}
	num = 0;
	for (a = 0; b[a] != '\0'; a++)
	{
		num = num << 1;

		if (b[a] == '1')
			num = num + 1;
	}
	return (num);
}
