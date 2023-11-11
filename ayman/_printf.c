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
	unsigned int i;
	const char *fr;

