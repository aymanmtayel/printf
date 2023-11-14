#include "main.h"

/**
 * _printf_bin - prints integers into binary.
 * @list: list of integers to be converted.
 *
 * Return: count of printed integers.
 */

unsigned int _printf_bin(va_list list)
{
	unsigned int nums, i, counter = 0;
	int leading_zero = 0;
	char bit;

	nums = va_arg(list, unsigned int);

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if (nums & i)
		{
			bit = '1';
			write(1, &bit, 1);
			counter++;
			leading_zero = 1;
		}
		else
		{
			if (leading_zero)
			{
				bit = '0';
				write(1, &bit, 1);
				counter++;
			}
		}
	}
	if (!leading_zero)
	{
		bit = '0';
		write(1, &bit, 1);
		counter++;
	}
	return (counter);
}

