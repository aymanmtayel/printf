#include "main.h"

/**
 * _printf_string - prints a list of strings.
 * @list: list of strings.
 *
 * Return: the length of the string if printed, or 6 which means that null
 */

int _printf_string(va_list list)
{
	char *s;
	unsigned int length = 0;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
		length = 6;
		write(1, s, 6);
		return (length);
	}

	while (s[length] != '\0')
		++length;
	write(1, s, length);
	return (length);
}
