#ifndef M_H
#define M_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_string(va_list list);
int print_char(va_list list);
int print_int(va_list list);
unsigned int bin(va_list list);
unsigned int print_unint(va_list list);
int print_octal(va_list list);

#endif
