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
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			++ptr;
			switch (*ptr)
			{
				case 'c':
					print += _putchar(list);
					break;
				case 's':
					print += _printf_string(list);
					break;
				case '%':
					print += write(1, ptr, 1);
					break;
				case 'd':
				case 'i':
					print += _printf_int(list);
					break;
				case 'b':
					print += _printf_bin(list);
					break;
				case 'u':
					print += _printf_unsi(list);
					break;
				case 'o':
					print += _printf_octal(list);
					break;
				default:
					print += write(1, "%", 1);
					print += write(1, ptr, 1);
			} }
		else
			print += write(1, ptr, 1);
		ptr++; }
		va_end(list);
		return (print); }
