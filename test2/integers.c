#include "main.h"

/**
 *
 *
 *
 *
 */

int print_int(va_list list)
{
	int i, n = va_arg(list, int);
	char hold[32];
	unsigned int counter = 0;
	char min = '-';

	if (n < 0)
	{
		write(1, &min, 1);
		counter++;
		n = -n;
	}
	i = 0;
	while (n != 0)
	{
		hold[i++] = (char) ((n % 10) + '0');
		n = n / 10;
	}
	while (i != -1)
	{
		write(1, &hold[i], 1);
		counter++;
		i--;
	}
	return (--counter);
}
