#include "main.h"

/**
 * _case - checks what is the format and print the character
 * @list: list of character to be checked
 * @ptr: pointer to the format
 * Return: printed characters
 */
unsigned int _case(va_list list, const char *ptr)
{
	unsigned int print = 0;

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
			} } else
			print += write(1, ptr, 1);
		ptr++; }
		va_end(list);
		return (print);
}
