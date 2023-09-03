#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
unsigned int get_base_length(unsigned int num, int base);
format_parser(format, funcs, arg_list);

/**
 * struct _format - data type def
 *
 * @type: fmt
 * @f: related func
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

int _putchar(char);
int _puts(char *str);
int buffer(char);

int print_integer(va_list);
int print_char(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_string(va_list);
int print_rot(va_list);
int print_hexadec_low(va_list);
int print_octal(va_list);
int print_hexadec_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

int percent_handler(const char *, va_list, int *);
int handler(const char *, va_list);

int print(char *);
int _strlen(const char *);
char *int_asc(long int, int);

int is_lowercase(char);
int _strgcmp(char *, char *);
int rot13(char *);
char *string_to_upper(char *);
int print_r(va_list);

int print_nonprint_strint(va_list);
int is_nonprintable(char);
int print_hex_digit(int);

#endif
