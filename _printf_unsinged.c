#include "main.h"

/**
 * _printf_unsi - prints integers unsgined
 * @list: list of integers to be printed
 *
 * Return: integers printed.
 */

unsigned int _printf_unsi(va_list list)
{
	unsigned int nums, num, digit = 1;
	int counter = 0;
	char temp;

	nums = va_arg(list, unsigned int);
	num = nums;

	while (num / 10)
	{
		digit *= 10;
		num /= 10;
	}
	while (digit)
	{
		temp = ((nums / digit) + '0');
		write(1, &temp, 1);
		nums %= digit;
		digit /= 10;
		counter++;
	}
	return (counter);
}
