#include "main.h"

/**
 * _printf_octal - printf integers in octal format
 * @list: list of integers to be printed.
 *
 * Return: number of printed integers.
 */

int _printf_octal(va_list list)
{
	unsigned int digit, nums, num;
	int counter;
	char temp;

	digit = 1;
	nums = va_arg(list, unsigned int);
	num = nums;
	counter = 0;

	while (nums / 8)
	{
		digit *= 8;
		nums /= 8;
	}
	while (digit)
	{
		temp = (num / digit) + '0';
		write(1, &temp, 1);
		num %= digit;
		digit /= 8;
		counter++;
	}
	return (counter);
}
