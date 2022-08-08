#ifndef MAIN_H
#define MAIN_H
#include <main.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int get_print(const char *, va_list, pt_fmt pt_format[]);
int print_digit(va_list);
int print_binary_conv(va_list);
int print_oct(va_list);
int print_hex_low(va_list);
int print_hex_upper(va_list);
int print_hex_upper(va_list valist);
int binary_oct_hex_convert(unsigned int, int, int);
int print_unsig_int(va_list valist);
typedef struct pt_fmt
{
	char *fmt;
	int (*print)(va_list valist);
} pt_fmt;

#endif
