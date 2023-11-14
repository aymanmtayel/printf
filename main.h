#ifndef M_H
#define M_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(va_list chars);
int _printf(const char *format, ...);
int _printf_string(va_list list);
int _printf_int(va_list list);

#endif
