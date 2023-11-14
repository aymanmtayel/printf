#include "main.h"

/**
 * _putchar - writes the list c to stdout
 * @chars: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(va_list chars)
{
	char c = va_arg(chars, int);

	write(1, &c, 1);
	return (1);
}
