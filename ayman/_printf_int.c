#include "main.h"

/**
 * _printf_int - function that prints integers
 * @list: list of integers.
 *
 * Return: count of integers given
 */

int _printf_int(va_list list)
{
	int number = va_arg(list, int);
	int last_num = number % 10, nums, digit, exp = 1;
	int counter = 1;
	char sign = '-';
	char temp;

	number = number / 10;
	nums = number;

	if (last_num < 0)
	{
		write(1, &sign, 1);
		nums = -nums;
		number = -number;
		last_num = -last_num;
		counter++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			exp = exp * 10;
			nums = nums / 10;
		}
		nums = number;
		while (exp > 0)
		{
			digit = nums / exp;
			temp = digit + '0';
			write(1, &temp, 1);
			nums = nums - (digit * exp);
			exp = exp / 10;
			counter++;
		}
	}
	temp = last_num + '0';
	write(1, &temp, 1);
	return (counter);
}
