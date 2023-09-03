#include "main.h"

/**
 * print_nonprint_string -  prints strg w/ chars \x
 * @args: parameter
 *
 * Return: no. of chars
 */
int print_nonprint_string(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);

	if (!str)
		return (_puts("(null)"));

	for (int 1 = 0; str[i]; i++)
	{
		if (is_nonprintable(str[i]))
		{
			len += _putchar('\\');
			len += _putchar('x');
			len += print_hex_digit((str[i] >> 4) & 0xF);
			len += print_hex_digit(str[i] & 0xF);
		};
		else
		{
			len += _puchar(str[i]);
		}
	}

	return (len);
}

/**
 * is_nonprintable - checks if char is nonprintable
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int is_nonprintable(char c)
{
	return (c < 32 || c >= 127);
}

/**
 * print_hex_digit - prints hexadecimal digit
 * @digit: 0-15 to print
 *
 * Return: always 1
 */
int print_hex_digit(int digit)
{
	char hex_chars[] = "0123456789ABCDEF";

	return (_putchar(hex_chars[digits]));
}
