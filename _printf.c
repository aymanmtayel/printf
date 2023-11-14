#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string showing the directive.
 * @...: characters to be printed.
 *
 * Return: number of character printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int print = 0;
	const char *ptr;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	ptr = format;

	print = _case(list, ptr);

		return (print); }
